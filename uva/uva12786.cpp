/* Tariq ahmed khan - Daffodil */

#include <bits/stdc++.h>


#define pi 2*acos(0.0)
#define scan(x) scanf("%d",&x)
#define sf scanf
#define pf printf
#define pb push_back
#define memoclr(n,x) memset(n,x,sizeof(n) )
#define INF 1 << 30
#define foo(i,j,k) for(int (x)=(i);(x)<(j);(x)+=(k))
#define ffoo(i,j,k) for(int (x)=(i);(x)<=(j);(x)+=(k))


typedef long long LLI;
typedef unsigned long long LLU;

template<class T> T gcd(T x, T y){if (y==0) return x; return gcd(y,x%y);}
template<class T> T lcm(T x, T y){return ((x/gcd(x,y))*y);}
template<class T> T maxt(T x, T y){if (x > y) return x; else return y;}
template<class T> T mint(T x, T y){if (x < y) return x; else return y;}
template<class T> T power(T x, T y){T res=1,a = x; while(y){if(y&1){res*=a;}a*=a;y>>=1;}return res;}
template<class T> T bigmod(T x,T y,T mod){T res=1,a=x; while(y){if(y&1){res=(res*a)%mod;}a=((a%mod)*(a%mod))%mod;y>>=1;}return res;}


int dir[8][2]={{-1,0}
              ,{1,0}
              ,{0,-1}
              ,{0,1}
              ,{-1,-1}
              ,{-1,1}
              ,{1,-1}
              ,{1,1}};


using namespace std;

bool comp (const int &a, const int &b){
    return a>b;
}

int main() {
    #ifdef partho222
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n;
    while(scan(n) == 1){
        int ary[n];
        for(int i=0 ; i<n ; i++){
            scan(ary[i]);
        }

        int f=0;
        sort(ary+0,ary+n,comp);
        for(int i=0 ; i<n ; i++){

                /*for(int m=0 ; m<n ; m++){
                    cout << ary[m] << endl;
                }
                cout << endl;*/

            int x = ary[i];

            for(int j=i+1 ; j<n && x>0 ; j++ , x--){
                ary[j]--;
            }

                /*for(int m=0 ; m<n ; m++){
                    cout << ary[m] << endl;
                }
                cout << endl;*/

            sort(ary+i,ary+n,comp);
            /*if(x < 0 ){
                f = 1; break;
            }*/
        }

        for(int i = 0 ; i<n ; i++){
            if(ary[i] < 0)  f=1;
        }

        if(f == 1){
            pf("0\n");
        }
        else{
            pf("1\n");
        }
    }

    return 0;
}
