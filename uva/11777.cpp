#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>

using namespace std;

int main()
{
    int loop,kase=0;
    cin >> loop;
    while(loop--)
    {
        int ary[7],i,sum=0,avg=0;
        for(i=0;i<7;i++)
        {
            cin >> ary[i];
        }
        for(i=0;i<4;i++)
        {
            sum=sum+ary[i];
        }

        sort(ary+4 , ary+7);

        for(i=5;i<7;i++)
        {
            avg=avg+ary[i];
        }
        avg=avg/2;
        sum=sum+avg;

        cout << "Case " << ++kase;

        if(sum>=90)
        {
            cout << ": A";
        }
        else if(sum>=80 && sum<90)
        {
            cout << ": B";
        }
        else if(sum>=70 && sum<80)
        {
            cout << ": C";
        }
        else if(sum>=60 && sum<70)
        {
            cout << ": D";
        }
        else if(sum<60)
        {
            cout << ": F";
        }
        cout << "\n";
    }
    return 0;
}
