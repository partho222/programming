/* Tariq ahmed khan - Daffodil */

#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <iomanip>


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

LLI fact[22];

void fact_gen()
{
    fact[0] = 1;
    fact[1] = 1;

    for(LLI i =2 ; i<22 ; i++)
    {
        fact[i] = i * fact[i-1];
    }
}

LLI nCr(LLI n,LLI r)
{
    LLI res;
    res = fact[n] / ( fact[r] * fact[n - r] );
    return res;
}

LLI dearrange(LLI n)
{
    LLI res= fact[n],chk = -1;

    for(LLI i = 1 ; i<=n ; i++)
    {
        res += power(chk,i) * ( fact[n]/fact[i] );
    }

    return res;
}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif // partho222

    fact_gen();
    LLI n , r;
    while(scanf("%lld %lld",&n,&r) != EOF)
    {
        LLI res = 0;
        for(LLI i = 0 ; i<= r ; i++)
        {
            res += nCr(n,i)*dearrange(n-i);
            //cout << nCr(n,i) << " " << dearrange(n-i) << endl;

        }

        pf("%lld\n",res);
    }


    return 0;
}
