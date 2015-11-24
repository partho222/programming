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


typedef long long LLI;
typedef unsigned long long LLU;

template<class T> T gcd(T x, T y){if (y==0) return x; return gcd(y,x%y);}
template<class T> T lcm(T x, T y){return ((x/gcd(x,y))*y);}
template<class T> T max(T x, T y){if (x > y) return x; else return y;}
template<class T> T min(T x, T y){if (x < y) return x; else return y;}


int dir[8][2]={{-1,0}
              ,{1,0}
              ,{0,-1}
              ,{0,1}
              ,{-1,-1}
              ,{-1,1}
              ,{1,-1}
              ,{1,1}};


using namespace std;

bool comp(const LLI &a, const LLI &b)
{
    if(a  > b)
        return true;

    return false;
}

int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif // partho222

    LLI n,res;
    sf("%lld",&n);
    res = n;

    LLI kan[n],flg[n],j;
    memoclr(flg,1);

    for(LLI i = 0 ; i<n ; i++)
    {
        sf("%lld",&kan[i]);
    }
    sort(kan+0,kan+n , comp);

    LLI x = 1;

    for(LLI i=0 ; i< n ; i++)
    {
        for(j = x ; j < n ; j++)
        {
            if(kan[i] >= (kan[j]*2) )
            {
                //cout << kan[i] << " " << kan[j] << endl;
                res--;
                x = j+1;
                break;
            }
        }

        if(j == n)
        {
            //cout << j << endl;
            break;
        }

    }

    cout << res << endl;

    return 0;
}
