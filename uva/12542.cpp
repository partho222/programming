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
#include <ctime>
#include <iomanip>

#define MAX 10000000
#define LLU unsigned int

using namespace std;

bool sts[MAX];


void IsPrime() /*costructing prime number*/
{
    LLU i, j;

    sts[1] = false;

    for(i=2; i<=MAX; i++)
    sts[i]=true;

    for(i=2; i<=MAX; i++)
    if(sts[i]==true)

    for(j=2*i; j<=MAX; j+=i)
    sts[j] = false;
}

int main()
{
    IsPrime();

    char prm[256];
    while(scanf("%s", prm)!=EOF)
    {
        if(strcmp("0",prm)==0)
        {
            return 0;
        }
        int len=strlen(prm),ary[256],tot;
        LLU i,j;

        for(i=0;i<len;i++)
        {
            ary[i]=prm[i]-'0';
        }

        int max=0;

        for(i=0;i<len;i++)
        {
            tot=0;
            for(j=i;j<len;j++)
            {
                tot=tot*10+ary[j];   /*creating & checking sub-string*/

                if(tot>100000)
                {
                    break;
                }

                if(sts[tot]==true)
                {
                    if(tot>max)
                    {
                        max=tot;
                    }
                }

            }

        }
        cout << max << endl;

    }
    return 0;
}
