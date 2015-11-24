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
    char iput[10000];
    while(gets(iput))
    {
        int len=strlen(iput),val[130]={0},i;

        for(i=0;i<len;i++)
        {
            if((iput[i]>=65 && iput[i]<=90) || (iput[i]>=97 && iput[i]<=122))
            {
                val[iput[i]]++;
            }
        }

        int tmp[130];
        for(i=0;i<=130;i++)
        {
           tmp[i]=val[i];
        }
        sort(tmp,tmp+130);
        int stor=tmp[129];
        for(i=0;i<130;i++)
        {
            if(val[i]==stor)
            {
                char a=i;
                cout << a;
            }
        }
        cout << " " << stor << endl;
    }
    return 0;
}
