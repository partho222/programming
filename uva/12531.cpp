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
    int deg;
    while(scanf("%d",&deg)!=EOF)
    {
        if((deg%6)==0)
        {
            cout << "Y\n";
        }
        else
        {
            cout << "N\n";
        }
    }
    return 0;
}
