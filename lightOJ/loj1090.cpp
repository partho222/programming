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

#define maxx 1000001


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

int vl[maxx][2], fct[maxx][2];

void calc(){
    for(int i=1; i<maxx; i++){
        int x=i;
        while(x%2 == 0 && x>0){
            vl[i][0]++;
            x /= 2;
        }

        x=i;
        while(x%5 == 0 && x>0){
            vl[i][1]++;
            x /= 5;
        }
        fct[i][0] = fct[i-1][0]+vl[i][0];
        fct[i][1] = fct[i-1][1]+vl[i][1];
    }
}

int main() {
    memoclr(vl, 0); memoclr(fct, 0);
    calc();
    //ios_base::sync_with_stdio(0);cin.tie(0);    // I/O optimization
    #ifdef partho222
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif

    int n, r, p, q, kase=0, k;

    scan(k);
    while(k--){
        scan(n); scan(r); scan(p); scan(q);

        int t2=fct[n][0]-fct[r][0]-fct[n-r][0], t5=fct[n][1]-fct[r][1]-fct[n-r][1];

        int pq2=(vl[p][0])*q, pq5=(vl[p][1])*q;

        int tot2=t2+pq2, tot5=t5+pq5;

        pf("Case %d: %d\n",++kase,mint(tot2, tot5) );
    }

    return 0;
}
