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

using namespace std;

int main()
{
    char lang[20];
    int kase=0;
    while(scanf("%s",lang)==1)
    {
        if(lang[0]=='#')
        {
            break;
        }
        else
        {
            if(strcmp(lang,"HELLO")==0)
            {
                printf("Case %d: ENGLISH\n",++kase);
            }
            else if(strcmp(lang,"HOLA")==0)
            {
                printf("Case %d: SPANISH\n",++kase);
            }
            else if(strcmp(lang,"HALLO")==0)
            {
                printf("Case %d: GERMAN\n",++kase);
            }
            else if(strcmp(lang,"BONJOUR")==0)
            {
                printf("Case %d: FRENCH\n",++kase);
            }
            else if(strcmp(lang,"CIAO")==0)
            {
                printf("Case %d: ITALIAN\n",++kase);
            }
            else if(strcmp(lang,"ZDRAVSTVUJTE")==0)
            {
                printf("Case %d: RUSSIAN\n",++kase);
            }
            else
            {
               printf("Case %d: UNKNOWN\n",++kase);
            }
        }
    }
    return 0;
}
