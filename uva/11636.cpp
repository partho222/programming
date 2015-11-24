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

#define LLI long long
#define LLU unsigned long long


using namespace std;

int main()
{
	//freopen("in","r",stdin);
	int num,kase=0;
	while(scanf("%d",&num)==1 && !(num<0))
	{
       int ans=1,kount=0;
       while(ans<num)
       {
            kount++;
            ans+=ans;
       }
       printf("Case %d: %d\n",++kase,kount);
	}

	return 0;
}
