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

const int maxn = 100000001 , maxm = 100001;

double res[maxm];

void calc(){
    double tmp = 1.0;
    res[0] = 0.0;

    for(int i = 2 ; i <= maxn ; i++){
        tmp += (1.0/double(i));
        if( i % 1000 == 0 ) res[i/1000] = tmp ;
    }

    //cout << res[100000] << "  " << res[100002] << endl;
}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    calc();

    int test,kase=0;
    scan(test);

    while(test--){
        int chk;
        scan(chk);
        pf("Case %d: ",++kase);

        double ans = 0.0;

        if( chk % 1000 == 0 && chk >= 1000 ){
                //cout << " -> " << chk / 1000 << endl;

                    pf("%.10lf\n",res[chk/1000] );
        }
        else{
            //cout << " on B" << endl;

            ans = res[chk/1000];
            int loop = chk%1000 , ex = chk/1000;

            //cout << " -> " << ex << " ->> " << loop << endl;

            for(int i = 1 ; i <= loop ; i++){
                ans += (1.0 / (double( (ex*1000)+i) ) );
            }
            pf("%.10lf\n",ans );
        }

    }

    return 0;
}
