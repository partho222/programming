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

int mark[50];

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int test,kase=0;
    scan(test);
    while(test--)
    {
        memoclr(mark,0);

        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int wish[n][k];

        for(int i=0 ; i< n ; i++)
        {
            for(int j=0 ; j< k ; j++)
            {
                scan(wish[i][j] );
            }
        }
        int p; scan(p);
        int solu;
        for(int i=0 ; i<p ; i++)
        {
            scan( solu );
            mark[ solu ] = 1;
        }

        int hapy = 0;
        for(int i=0 ; i < n ; i++)
        {
            for(int j=0 ; j<k ; j++)
            {
                if(wish[i][j] >= 0)
                {
                    if( mark[ abs( wish[i][j] ) ] == 1 )
                    {
                        //cout << wish[i][j] << " " << mark[ wish[i][j] ] << endl;
                        hapy++;
                        break;
                    }
                }
                else if( wish[i][j] < 0 )
                {
                    if( mark[ abs( wish[i][j] ) ] == 0 )
                    {
                        //cout << wish[i][j] << " " << mark[ wish[i][j] ] << endl;
                        hapy++;
                        break;
                    }
                }
            }
        }

        //cout << hapy << endl;

        pf("Case %d: ",++kase);
        if(hapy == n)
        {
            pf("Yes\n");
        }
        else
        {
            pf("No\n");
        }

    }


    return 0;
}
