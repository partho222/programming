/* Tariq ahmed khan - Daffodil */

#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0); // I/O optimization


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
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    char iput[20];
    gets(iput);
    while(1){
        gets(iput);
        if( strcmp(iput,"___________") == 0 ){
            break;
        }

        int res = 0;
        if(iput[9] == 'o'){
            res += 1;
        }
        if(iput[8] == 'o'){
            res += 2;
        }
        if(iput[7] == 'o'){
            res += 4;
        }
        if(iput[5] == 'o'){
            res += 8;
        }
        if(iput[4] == 'o'){
            res += 16;
        }
        if(iput[3] == 'o'){
            res += 32;
        }
        if(iput[2] == 'o'){
            res += 64;
        }
        if(iput[1] == 'o'){
            res += 128;
        }

        pf("%c",res);
    }

    return 0;
}
