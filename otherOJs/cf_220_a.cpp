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


int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif // partho222
    int n,m,i,j,a,b,res=INF;
    sf("%d %d %d %d %d %d",&n,&m,&i,&j,&a,&b);
    int dif[4][2] = { {1,1},{1,m},{n,1},{n,m} };

    if( ( i == 1 || i == n ) && (j == 1 || j == m) )
    {
        cout << 0 << endl;
        return 0;
    }
    else if( ( (i+a) > n && (i-a) < 1 ) && ( (j+b) > m && (j-b) < 1 ) )
    {
        cout << 0 << endl;
        return 0;
    }


    for(int k=0 ; k< 4 ; k++)
    {
        int x,y;
        x = dif[k][0] - i;
        y = dif[k][1] - j;

        //cout << x << " " << y << endl;
        int xx = ( (x*b)+(y*a) ) / (2*a*b) ;
        int yy = ( (x*b)-(y*a) ) / (2*a*b) ;

        if( ( (xx*a) + (yy*a) ) == x && ( (xx*b) - (yy*b) ) == y )
        {
            res = mint(res , abs(xx)+abs(yy) );
        }

    }


    if(res == INF)
        cout << "Poor Inna and pony!" << endl;
    else
         cout << res << endl;

    return 0;
}
