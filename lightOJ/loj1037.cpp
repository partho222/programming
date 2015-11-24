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

int n,mem0[16][1<<16],life[16];
char gun[16][16];


int dp(int i,int mask)
{
    if(mask == ((1<<n)-1) )
        return 0;

    int &res = mem0[i][mask];

    if( res != -1)
        return res ;

    res = INF;

    for(int j=0 ; j<n ; j++)
    {
        if( (mask & (1<<j)) ==0 )
        {
            int newmask = (mask | (1<<j)) ;

            int bult = 1;

            for(int k=0 ; k<n ; k++)
            {
                if ( (mask & (1<<k)) )
                {
                    bult = maxt( bult,(gun[k][j]-'0') );
                }
            }
                //bult = max(bult,gun[i][j]);

                int tmp = (life[j]/bult);

                //cout <<"ori " << tmp << endl;

                if(life[j]%bult != 0)
                {
                    //cout << "gen "<< tmp << endl ;
                    tmp++;
                }

                //res += tmp2;

                res = mint( res , (dp(i+1,newmask))+tmp );
        }
    }

    return res;
}

int main()
{
    int test,kase=0;
    scan(test);
    while(test--)
    {
        memset(mem0,-1,sizeof(mem0));
        scan(n);
        for(int i=0 ; i< n ; i++)
        {
            scan(life[i]);
        }

        for(int i=0 ; i< n ; i++)
        {
            scanf("%s",gun[i]+0);
        }

        printf("Case %d: %d\n",++kase,dp(0,0));

    }

    return 0;
}
