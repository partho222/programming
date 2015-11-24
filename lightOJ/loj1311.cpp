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

    int test,kase=0;
    scan(test);
    while(test--){
        double v1,v2,v3,d1,d2;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&d1,&d2);

        double t1 = v1/d1,dist1 = (v3*t1) , t2 = v2/d2 , dist2 = (v3*t2); // v = u - at
        double s1 = (v1*v1)/(2*d1) , s2 = (v2*v2)/(2*d2);  // v^2 = u^2 - 2as
        double dist = maxt(dist1,dist2);
        //cout << t << endl;
        pf("Case %d: %.8lf %.8lf\n",++kase,(s1+s2),dist);
    }

    return 0;
}
