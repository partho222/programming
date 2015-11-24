#include <stdio.h>


int main()
{
    int i,sto[1505],v2,v3,v5,loc2=0,loc3=0,loc5=0;
    sto[0]=1;

    for(i=1;;i++)
    {
        v2=2*sto[loc2];
        v3=3*sto[loc3];
        v5=5*sto[loc5];

        if(v2<v3 && v2<v5)
        {
            sto[i]=v2;
            loc2++;
        }
        else if(v3<v2 && v3<v5)
        {
            sto[i]=v3;
            loc3++;
        }
        else if(v5<v2 && v5<v3)
        {
            sto[i]=v5;
            loc5++;
        }

        else if(v2==v3)
        {
            loc3++;
            i--;
        }
        else if(v3==v5)
        {
            loc5++;
            i--;
        }
        else if(v2==v5)
        {
            loc5++;
            i--;
        }

        if(i==1502)
        {
            break;
        }
    }

    printf("The 1500'th ugly number is %d.\n",sto[1499]);
    return 0;
}
