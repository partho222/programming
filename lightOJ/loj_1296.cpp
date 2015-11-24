/* Tariq ahmed khan - Daffodil */

#include <bits/stdc++.h>
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

int spra_grundy(int x)
{
    int tmp;
    if(x%2 == 0 && x >= 2)
        return (x/2);
    else if(x < 2)
        return 0;
    else if(x%2 != 0)
    {
        tmp = x - 1;
        tmp /= 2;
        spra_grundy(tmp);
    }
}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif // partho222

    int test,kase=0;
    scan(test);
    while(test--)
    {
        int x,nim = 0;
        scan(x);
        while(x--)
        {
            int data;
            scan(data);
            nim ^= spra_grundy(data);
        }

        if(nim)
            pf("Case %d: Alice\n",++kase);
        else
            pf("Case %d: Bob\n",++kase);
    }


    return 0;
}
