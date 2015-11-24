#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string.h>

#define MAX 5000

using namespace std;

int main()
{
    char word[MAX];
    int count=0,i,len;

    while(gets(word))
    {
        len=strlen(word);
        for(i=0;i<len;i++)
        {
            if(((word[i]>='a' && word[i] <='z') || (word[i]>='A' && word[i]<='Z')) && ((word[i+1]<'a' || word[i+1]>'z') && (word[i+1]<'A' || word[i+1]>'Z')))
            {
                ++count;
            }
        }

        cout << count << "\n";
        count=0;

    }
    return 0;
}
