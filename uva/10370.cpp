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
        int stud;
        cin >> stud;
        int i;
        double res[stud],tot=0,num=0,avg,perctng;

        for(i=0;i<stud;i++)
        {
            cin >> res[i];
            tot=tot+res[i];
        }
        avg=tot/stud;

        for(i=0;i<stud;i++)
        {
            if(res[i]>avg)
            {
                ++num;
            }
        }
        perctng=(num/stud)*100;

        printf("%0.3lf",perctng);
        cout << "%\n";
    }
    return 0;
}
