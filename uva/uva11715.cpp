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

    int kase=0;

    while(1){
        int det;
        scan(det);

        if(det == 0){
            break;
        }

        pf("Case %d: ",++kase);
        double u,v,a,s,t;

        if(det == 1){
            sf("%lf %lf %lf",&u,&v,&t);
            a = (v-u)/t;
            s = ( (v*v)-(u*u) )/(2*a);

            pf("%.3lf %.3lf\n",s,a);
        }
        else if(det == 2){
            sf("%lf %lf %lf",&u,&v,&a);
            s = ( (v*v)-(u*u) )/(2*a);
            t = (v-u)/a;

            pf("%.3lf %.3lf\n",s,t);
        }
        else if(det == 3){
            sf("%lf %lf %lf",&u,&a,&s);
            v = sqrt( (u*u)+(2*a*s) );
            t = (v-u)/a;

            pf("%.3lf %.3lf\n",v,t);
        }
        else if(det == 4){
            sf("%lf %lf %lf",&v,&a,&s);
            u = sqrt( (v*v)-(2*a*s) );
            t = (v-u)/a;

            pf("%.3lf %.3lf\n",u,t);
        }
    }

    return 0;
}
