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
#define foo(i,j,k) for(int (x)=(i);(x)<(j);(x)+=(k))


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

int iput[2000010];

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n;
    scan(n);
    while(n != 0){
        int cn = 0;
        foo(0,n,1){
            scan(iput[cn++]);
        }
        sort(iput+0 , iput+n);
        cn = 0;
        foo(0,n,1){
            pf("%d",iput[cn++]);
            if(cn < n){
                pf(" ");
            }
        }
        pf("\n");
        scan(n);
    }

    return 0;
}
