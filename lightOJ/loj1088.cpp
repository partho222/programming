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

int ary[100010],n,q;

int solve(int lo , int up){
    return distance( lower_bound(ary+0,ary+n,lo) , upper_bound(ary+0,ary+n,up) );
}

void read(){
    int lo,up;
    scan(n); scan(q);
    for(int i=0 ; i< n ; i++)
    {
       scan(ary[i]);
    }
    for(int i=0 ; i<q ; i++)
    {
        sf("%d %d",&lo,&up);
        pf("%d\n",solve(lo,up) );
    }
}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int test,kase=0;
    scan(test);
    while(test--)
    {
        pf("Case %d:\n",++kase);
        read();
    }

    return 0;
}
