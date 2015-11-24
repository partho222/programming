#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int loop;
    cin >> loop;

    while(loop--)
    {
        int no,i,j,count=0;
        cin >> no;

        int list[no-1];
        for(i=0;i<no;i++)
        {
            cin >> list[i];
        }

        for(i=1;i<no;i++)
        {
            for(j=0;j<i;j++)
            {
                if(list[i]>=list[j])
                {
                    ++count;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
