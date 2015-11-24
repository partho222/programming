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

int dist(int x1 , int y1 , int x2, int y2){
    int x = (x1-x2) , y = (y1-y2);
    x *= x; y *= y;
    return (int)(sqrt(x+y));
}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int test,kase=0;
    scan(test);
    while(test--){
        int router,loc;
        scan(router); scan(loc);
        int stor;
        int rx[router],ry[router],rr[router],lx[loc],ly[loc];
        for(int i=0 ; i<router ; i++){
            sf("%d %d %d",&rx[i],&ry[i],&rr[i]);
        }
        for(int i=0 ; i<loc ; i++){
            sf("%d %d",&lx[i],&ly[i]);
        }

        pf("Case %d:\n",++kase);
        for(int i=0 ; i<loc ; i++){
            int f = 1;
            for(int j=0 ; j<router ; j++){
                stor = dist( lx[i] ,ly[i] ,rx[j] ,ry[j] );
                //cout << "location :" << i << "  router : " << j << stor << endl;
                if(stor <= rr[j]){
                    pf("Yes\n"); f=0;
                    break;
                }
            }
            if(f){
                pf("No\n");
            }
        }
    }

    return 0;
}
