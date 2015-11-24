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

#define LLI long long int
#define LLU unsigned long long


using namespace std;

int main()
{
	//freopen("in","r",stdin);
	int test;
	scanf("%d",&test);
	while(test--)
	{
        int far,ans=0;
        scanf("%d",&far);
        while(far--){
            int land,anim,eco;
            scanf("%d%d%d",&land,&anim,&eco);

            ans+=(land*eco);
        }
        printf("%d\n",ans);
	}

	return 0;
}
