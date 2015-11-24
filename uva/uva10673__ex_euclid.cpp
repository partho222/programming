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


//typedef __int64 LLI;
//typedef unsigned __int64 LLU;

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


void ex_euclid(LLI a,LLI b,LLI &d,LLI &p,LLI &q){
    if(b == 0){
        d=a; p=1; q=0;
    }
    else{
        ex_euclid(b, a%b, d, q, p);
        q = q-(p*(a/b));
    }
}


int main() {
    #ifdef partho222
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int test;
    scan(test);
    while(test--){
        LLI x,k,p=0,q=0,d=0;

        sf("%lld %lld",&x,&k);
        LLI a = floor(1.0*x/k);
        LLI b = ceil(1.0*x/k);

        //cout << a << " " << b << " " << d << " " << p << " " << q << endl;
        ex_euclid(a,b,d,p,q);
        p *= (x/d); q *= (x/d);
        pf("%lld %lld\n",p,q);
    }

    return 0;
}
