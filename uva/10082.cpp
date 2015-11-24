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

#define MAX 10000

using namespace std;

int main()
{
    char layout[48]={96,49,50,51,52,53,54,55,56,57,48,45,61,81,87,69,82,84,89
                    ,85,73,79,80,91,93,92,65,83,68,70,71,72,74,75,76,59,39
                    ,90,88,67,86,66,78,77,44,46,47};

    char input[MAX];
    while(gets(input)>0)
    {
        int len,i,j;

        len=strlen(input);
        for(i=0;i<len;i++)
        {
            if(input[i]==' ')
            {
                cout << input[i];
            }
            for(j=0;j<=47;j++)
            {
                if(input[i]==layout[j])
                {
                    cout << layout[j-1];
                }
            }
        }
        cout << "\n";
    }
    return 0;

}
