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

int wal,mon[500],res=0,mark[500] = {0};

void chk(int i)
{
        if(mon[i] > 0)
        {
            pf("P");
            mon[i]--;
        }

        if(mon[i] == 0 && mark[i] == 0)
        {
            res++;
            mark[i] = 1;
        }
}


int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    cin >> wal;

    for(int i=0 ; i < wal ; i++)
    {
        cin >> mon[i];
    }

    int i=0;

    chk(i);
    while(res != wal)
    {
        if( i+1 < wal )
        {
            pf("R");
            i++;
            chk(i);
            continue;
        }

        while(i > 0)
        {
            pf("L");
            i--;
            chk(i);
        }
    }


    pf("\n");


    return 0;
}
