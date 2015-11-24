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

int main() {
    #ifdef partho222
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    char t[11];   gets(t);
    int test = atoi(t);
    while(test--){
        stack<char> s;
        char c[129],x;
        gets(c);
        int l = strlen(c),f=0; //cout << l << endl;
        if(!strcmp(c,"")){
            pf("Yes\n"); continue;
        }
        for(int i=0 ; i<l ; i++){
            if(c[i]=='(' || c[i]=='['){
                    s.push(c[i]);
            }
            else if(c[i]==')' && s.size()>0){
                x = s.top();
                if(x=='('){
                    s.pop();
                }
                else{
                    f=1;    break;
                }
            }
            else if(c[i]==']' && s.size()>0){
                x = s.top();
                if(x=='['){
                    s.pop();
                }
                else{
                    f=1;    break;
                }
            }
            else{
                f=1;    break;
            }
        }
        if(f || s.size()>0){
            pf("No\n");
        }
        else{
            pf("Yes\n");
        }
    }

    return 0;
}
