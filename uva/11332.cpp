#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char num[11];
    int i,temp,len,temp2;
    scanf("%s",num);

    while(num[0]!=48)
    {
        len=strlen(num);
        temp=0;

        for(i=0;i<len;i++)
        {
            num[i]=num[i]-48;
            temp=temp+num[i];
        }
        temp2=temp;

        if(temp>9)
        {
            while(temp>9)
            {
                for(i=1;i>=0;i--)
                {
                    temp=temp%10;
                    num[i]=temp;
                    temp=temp2/10;
                }

                temp=0;

                for(i=0;i<2;i++)
                {
                    temp=temp+num[i];
                }

                temp2=temp;
            }

            printf("%d\n",temp);

        }

        else
        {
            printf("%d\n",temp);
        }

        scanf("%s",num);
    }

    return 0;
}
