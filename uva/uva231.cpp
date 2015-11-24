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
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])


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

vector<int> miss;

int LIS()
{
    int len = miss.size(),lis[len],res=1;
    for(int i=0 ; i<len ; i++){
        lis[i] = 1;
        for(int j=0 ; j<i ; j++){
            if(miss[j] >= miss[i]){
                lis[i] = maxt(lis[i] , lis[j]+1);
            }
            res = maxt(lis[i] , res);
        }
    }

    return res;
}


int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int iput,kase=0;
    while(cin >> iput && iput != -1){
        if(kase){
            pf("\n");
        }
        miss.clear();
        miss.pb(iput);
        while(cin >> iput && iput != -1){
            miss.pb(iput);
        }

        int res = LIS();
        pf("Test #%d:\n  maximum possible interceptions: %d\n",++kase,res);
    }

    return 0;
}
