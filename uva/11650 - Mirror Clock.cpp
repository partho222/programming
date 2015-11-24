#include<stdio.h>

int main()
{
    int test,i,hr,mn;
    scanf("%d",&test);
    while(test!=0)
    {
        scanf("%d:%d",&hr,&mn);

        if(mn==0)
        {
            hr=11-hr+1;
        }
        else
        {
            hr=11-hr;
        }


        if(mn!=0)
        {
            mn=60-mn;
        }

        if(hr<=0)
        {
            hr=hr+12;
        }

        printf("%02d:%02d\n",hr,mn);
        test--;
    }
    return 0;
}
