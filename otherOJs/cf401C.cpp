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
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int a,b,f=0;
    scan(a); scan(b);

    if( a <= b && (a+1) >= ( (b/2)+(b%2) ) ){
        int f=0;


        while(a != b && b != 1){
            if(b >= 2){
                pf("11");
                b -= 2;
                f = 1;
            }
            if(a >= 1 && f){
                pf("0");
                a--;
                f= 0;
            }



        }

        if(b == 1){
            pf("1");
            b--;
        }

        if(a == 1){
            pf("0");
            a--;
        }

        if(a == b){
            for(int i = 1 ; i<=a ; i++){
                pf("10");
            }
        }


        pf("\n");
    }

    else if(a>b && a-b == 1){
        while(1){
                if(a > 0){
                    pf("0");
                    a--;
                }
                if(b > 0){
                    pf("1");
                    b--;
                }

                if(a==0 && b==0){
                    break;
                }
            }
    }
    else{
        pf("-1\n");
    }

    return 0;
}
