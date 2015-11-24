#include <cctype>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long fact_iput,fact_ans=1,i;

    while(scanf("%lld",&fact_iput)!=EOF)
    {
        fact_ans=1;
        if(fact_iput>0)
        {
            for(i=fact_iput;i>0;i--)
            {
                fact_ans=fact_ans*i;
                if(fact_ans > 6227020800LL)
                {
                    cout << "Overflow!\n";
                    break;
                }
            }
        }
        else
        {
            if((fact_iput%2)==0)
            {
                cout << "Underflow!\n";
                continue;
            }
            else
            {
                cout << "Overflow!\n";
                continue;
            }
        }


        if(fact_ans < 10000)
        {
            cout << "Underflow!\n";
        }

        else if((fact_ans <= 6227020800LL) && (fact_ans > 10000))
        {
            cout << fact_ans << "\n";
        }
    }
    return 0;
}
