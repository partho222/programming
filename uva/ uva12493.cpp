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
#define LLU unsigned long long

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

int eular(int n)
{
	int val=1,i,m = n, root = sqrt(n)+1;
	for(i=2;i<=root ;i++)
	{
		if(m%i==0)
		{
			n= n - (n/i);
			do
			{
				m=m/i;
			}while(m%i==0);
			root = int ( sqrt( double (m)));
		}
	}

	if(m>1)
	{
		n = n -(n/m);
	}
	return n;
}

int main()
{
	int iput;
	while(scanf("%d",&iput)!=EOF)
	{
		int ans,val;
		val=eular(iput);
		ans=val/2;
		pf("%d\n",ans);
	}
	return 0;
}
