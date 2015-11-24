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

char num1[12],num2[12];

using namespace std;

int main()
{
    while(1)
    {
        cin >> num1 >> num2;

        if(strcmp(num1,"0")==0 && strcmp(num2,"0")==0)
        {
            return 0;
        }
        else
        {
            int len1=strlen(num1),len2=strlen(num2),i,j,k=0,cary=0,ans=0,sum;

            if(len1>=len2)
            {
                for(i=len1-1;i>=0;i--)
                {
                    if(k==len2)
                    {
                        sum=num1[i]-48+cary;
                    }
                    else
                    {
                        for(j=len2-1-k;j>=0;j--)
                        {
                            sum=num1[i]-48+num2[j]-48+cary;
                            k++;
                            break;
                        }
                    }

                    if(sum>9)
                    {
                        ans++;
                        cary=1;
                    }
                    else
                    {
                        cary=0;
                    }
                }
            }


            else
            {
                for(i=len2-1;i>=0;i--)
                {
                    if(k==len1)
                    {
                        sum=num2[i]-48+cary;
                    }
                    else
                    {
                        for(j=len1-1-k;j>=0;j--)
                        {
                            sum=num1[j]-48+num2[i]-48+cary;
                            k++;
                            break;
                        }
                    }

                    if(sum>9)
                    {
                        ans++;
                        cary=1;
                    }
                    else
                    {
                        cary=0;
                    }
                }
            }

            if(ans>0)
            {
                if(ans>1)
                {
                    cout << ans << " carry operations." << endl;
                }
                else
                {
                    cout << ans << " carry operation." << endl;
                }
            }
            else
            {
                cout << "No carry operation." << endl;
            }
        }
    }
    return 0;
}
