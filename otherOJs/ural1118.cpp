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


int dir[8][2]={{-1,0}
              ,{1,0}
              ,{0,-1}
              ,{0,1}
              ,{-1,-1}
              ,{-1,1}
              ,{1,-1}
              ,{1,1}};


using namespace std;

int prime[1000000],tmp[10010];

bool chk(int num) {
	if(num<=1)
		return false;
	if(num==2)
		return true;
	if(num%2==0)
		return false;
	int sRoot = sqrt(num*1.0);
	for(int i=3; i<=sRoot; i+=2){
		if(num%i==0)
			return false;
	}
	return true;
}

void prime_gen(){
    int a =0;
    for(int i=2 ; i < 1000000 ; i++ ) // change with needed limit
    {
        if( chk(i) )
            prime[a++] = i; // can use vector -->> prime.push_back(i) ;
    }
}

LLI sigma(LLI n){  // sum 0f ALL divisors
    LLI sqrtn = sqrt ( n );
    int i;
    LLI res = 1;
    for( i = 0; prime[i] <= sqrtn; i++ ) {
        if( (n % prime[i]) == 0 ) {
        int p = 0;
        while( (n % prime[i]) == 0 ) {
                p++;
                n /= prime[i];
            }
            res *= (power(prime[i], p+1 ) - 1) / ( prime[i] - 1 );
            sqrtn = sqrt(n);
        }
    }
    if ( n > 1 ) {
        res *= ( ( n * n ) - 1 ) / ( n - 1 );
    }
    return res;
}


int main() {
    #ifdef partho222
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif // partho222

    prime_gen();
    int st,stp,res=1;
    scan(st); scan(stp);

    double cmp = INF;
    for(int i = st ; i<= stp ; i++)
    {
        //cout << sigma(i) << endl;
        LLI x = sigma(i);
        double tmp = double(x - i)/double(i);

        if(tmp < cmp)
        {
            cmp = tmp;
            res = i;
        }
    }

    pf("%d\n",res);
    return 0;
}
