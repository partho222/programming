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


typedef __int64 LLI;
typedef unsigned __int64 LLU;

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
        //freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m;
    scan(n);
    int ary[n+1];
    LLI usort[n+2], srt[n+2];
    usort[0] = 0; srt[0] = 0;

    for(int i=0 ; i<n ; i++){
        scan(ary[i]);
        usort[i+1] = usort[i]+ary[i];
    }
    sort(ary+0 , ary+n);
    for(int i=0 ; i<n ; i++){
        srt[i+1] = srt[i] + ary[i];
    }
    scan(m);

    int typ , st ,ed;
    for(int i=0 ; i<m ; i++){
        scan(typ); scan(st); scan(ed);
        if(typ == 1){
            pf("%I64d\n",usort[ed]-usort[st-1]);
        }
        else if(typ == 2){
            pf("%I64d\n",srt[ed]-srt[st-1]);
        }
    }

    return 0;
}
