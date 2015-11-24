#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

using namespace std;

int main()
{
    int loop,kase=0;
    cin >> loop;
    getchar();

    while(loop--)
    {
        char iput[MAX],oput[MAX],reformat[MAX],reformat2[MAX];
        int i,j=0,len,len2;

        gets(iput);
        gets(oput);

        len=strlen(iput);
        len2=strlen(oput);

        if((strcmp(iput,oput))==0)
        {
            cout << "Case " << ++kase << ": Yes\n";
        }
        else
        {
            for(i=0;i<len;i++)
            {
                reformat[j]=iput[i];
                if(iput[i]!=32)
                {
                    ++j;
                }
            }
            reformat[j]='\0';

            j=0;
            for(i=0;i<len2;i++)
            {
                reformat2[j]=oput[i];
                if(oput[i]!=32)
                {
                    ++j;
                }
            }
            reformat2[j]='\0';

            if((strcmp(reformat,reformat2))==0)
            {
                cout << "Case " << ++kase << ": Output Format Error\n";
            }

            else
            {
                cout << "Case " << ++kase << ": Wrong Answer\n";
            }
        }
    }
    return 0;
}
