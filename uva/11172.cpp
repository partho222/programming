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
    int loop;
    cin >> loop;
    while(loop--)
    {
        long int fst,scnd;
        cin >> fst >> scnd;
        if(fst==scnd)
          {
              cout << "=\n";
          }
        else if(fst<scnd)
          {
              cout << "<\n";
          }
        else if(fst>scnd)
          {
              cout << ">\n";
          }
    }
    return 0;
}
