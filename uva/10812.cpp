#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        unsigned long goal_total,goal_diff,predic_1,predic_2;
        cin >> goal_total >> goal_diff;

        if((goal_total>=goal_diff) && ((goal_total+goal_diff)%2)==0)
        {
            predic_2=(goal_total-goal_diff)/2;
            predic_1=goal_total-predic_2;

            cout << predic_1 << " " << predic_2 << "\n";
        }
        else
        {
            cout << "impossible\n";
        }
    }
    return 0;
}
