/* Tariq ahmed khan - Daffodil */

#include <bits/stdc++.h>

// _ ios_base::sync_with_stdio(0);cin.tie(0); // I/O optimization


#define pi 2*acos(0.0)
#define scan(x) scanf("%d",&x)
#define sf scanf
#define pf printf
#define pb push_back
#define memoclr(n,x) memset(n,x,sizeof(n) )
#define INF 1 << 30


typedef long long LLI;
typedef unsigned long long LLU;

template<class T> T gcd(T x, T y){if (y==0) return x; return gcd(y,x%y);}
template<class T> T lcm(T x, T y){return ((x/gcd(x,y))*y);}
template<class T> T maxt(T x, T y){if (x > y) return x; else return y;}
template<class T> T mint(T x, T y){if (x < y) return x; else return y;}
template<class T> T power(T x, T y){T res=1,a = x; while(y){if(y&1){res*=a;}a*=a;y>>=1;}return res;}
template<class T> T bigmod(T x,T y,T mod){T res=1,a=x; while(y){if(y&1){res=(res*a)%mod;}a=(a*a)%mod;y>>=1;}return res;}


int dir[8][2]={{-1,0}
              ,{1,0}
              ,{0,-1}
              ,{0,1}
              ,{-1,-1}
              ,{-1,1}
              ,{1,-1}
              ,{1,1}};


using namespace std;

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n,k,tmp,minu = 0,minu2 = 0;
    scan(n); scan(k);

    int tree[n+10],tree2[n+10];

    int tr[n+10],val[n+10],tr2[n+10],val2[n+10];
    char s[n+10],s2[n+10];

    for(int i=1 ; i<= n ; i++){
        scan(tree[i]);
        tree2[i] = tree[i];
    }

    if(n == 1){
        if(tree[1] - k > 0){
            pf("1\n- 1 %d\n",abs(tree[1] - k));
        }
        else if(tree[1] - k < 0){
            pf("1\n+ 1 %d\n",abs(tree[1] - k));
        }
        else{
            pf("0\n");
        }
    }
    else{


        for(int i=2 ; i<= n ; i++){
            if(tree[i] - tree[i-1] != k){
                tmp = abs((tree[i] - tree[i-1]) - k);
                if( tree[i] - tree[i-1] > k && (tree[i] - tmp > 0) ){
                    s[minu] = '-'; tr[minu] = i; val[minu] = tmp;
                    tree[i] -= tmp;
                    minu++;
                }
                else if(tree[i] - tree[i-1] < k){
                    s[minu] = '+'; tr[minu] = i; val[minu] = tmp;
                    tree[i] += tmp;
                    minu++;
                }
                else if( tree[i] - tmp < 0 ){
                    minu = INF;
                    break;
                }
            }
        }

        for(int i=n-1 ; i > 0 ; i--){
            if(tree2[i+1] - tree2[i] != k){
                tmp = abs( (tree2[i+1] - tree2[i]) - k );
                if( tree2[i+1] - tree2[i] > k ){
                    s2[minu2] = '+'; tr2[minu2] = i; val2[minu2] = tmp;
                    tree2[i] += tmp;
                    minu2++;
                }
                else if(tree2[i+1] - tree2[i] < k && (tree2 - tmp > 0) ){
                    s2[minu2] = '-'; tr2[minu2] = i; val2[minu2] = tmp;
                    tree2[i] -= tmp;
                    minu2++;
                }
                else if( (tree2 - tmp < 0) ){
                    minu2 = minu+1;
                    break;
                }
            }
        }

        if(minu < minu2){
            pf("%d\n",minu);
            for(int i = 1 ; i <= minu ; i++){
                pf("%c %d %d\n",s[i],tr[i],val[i] );
            }
        }
        else{
            pf("%d\n",minu2);
            for(int i = minu2 ; i >0 ; i--){
                pf("%c %d %d\n",s2[i],tr2[i],val2[i] );
            }
        }

    }

    return 0;
}
