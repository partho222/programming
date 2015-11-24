#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ini_prob,a,i,j,count=1;
    int p_for_mont[12],p_avil_mont[12];

    scanf("%d",&ini_prob);

    if(ini_prob<0)
    {
        a=0;
    }
    else
    {
        a=1;
    }


    while(a)
    {
        for(i=0;i<12;i++)
        {
            scanf("%d",&p_avil_mont[i]);
        }
        for(i=0;i<12;i++)
        {
            scanf("%d",&p_for_mont[i]);
        }
        int brk;
        scanf("%d",&brk);


        printf("Case %d:\n",count++);

            if(p_for_mont[0]<=ini_prob)
            {
                printf("No problem! :D\n");
                ini_prob=ini_prob-p_for_mont[0];
                p_avil_mont[0]=p_avil_mont[0]+ini_prob;
            }
            else
            {
                printf("No problem. :(\n");
                p_avil_mont[0]=ini_prob+p_avil_mont[0];
            }



        j=0;
        for(i=1;i<12;i++)
        {
            if(p_for_mont[i]<=p_avil_mont[j])
            {
                printf("No problem! :D\n");
                p_avil_mont[j]=p_avil_mont[j]-p_for_mont[i];
                p_avil_mont[j+1]=p_avil_mont[j]+p_avil_mont[j+1];
            }
            else
            {
                printf("No problem. :(\n");
                p_avil_mont[j+1]=p_avil_mont[j]+p_avil_mont[j+1];
            }
            j++;
        }


        if(brk<0)
        {
            break;
        }
        else
        {
            ini_prob=brk;
            a=1;
        }
    }

    return 0;


}
