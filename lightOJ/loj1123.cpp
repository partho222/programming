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

struct node{
    int st,ed,len;
};

node edge[300];

bool comp(const node &a , const node &b){
    if(a.len < b.len)
        return true;
    return false;
}

int up[300],dow[300];

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int test,kase=0;
    scan(test);
    while(test--)
    {
        int n,wk,x,y;
        scan(n); scan(wk);
        pf("Case %d:\n",++kase);

        for(int i=0 ; i<wk ; i++)
        {
            scanf("%d %d %d",&edge[i].st,&edge[i].ed,&edge[i].len);

            if(i < n-1)
            {
                pf("-1\n");
                continue;
            }


            memoclr(up,-1);
            memoclr(dow,-1);
            sort(edge+0,edge+(i+1),comp);

            int res = 0,all=0;

            for(int j=0 ; j<= i && all != n-1 ; j++)
            {
                if( dow[ edge[j].ed ] == -1 || up[ edge[j].st ] == -1 )
                {
                    //cout << edge[j].st << " -> " << edge[j].ed << " = " << edge[j].len << endl;

                    up[ edge[j].st ] = 0 ; dow[ edge[j].ed ] = 0;
                    //up[ edge[j].ed ] = 0 ; dow[ edge[j].st ] = 0;

                    res += edge[j].len;
                    all++;
                }
            }

            //cout << res << endl;
            if( all == n-1)
                pf("%d\n",res);
            else
                pf("-1\n");
        }
    }

    return 0;
}
