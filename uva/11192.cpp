#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    char str[1000],strst[1000];
    scanf("%d",&num);

    while(num)
    {
        int len,div,i,j,a,bnum,end,b,c;
        a=0;
        b=0;
        c=0;

        scanf("%s",str);
        len=strlen(str);
        div=len/num;

        bnum=div;

        for(j=0;j<num;j++)
        {
            div=bnum*++a;
            end=bnum*c++;

            for(i=div-1;i>=end;i--)
            {
                strst[b++]=str[i];
            }
        }
        strst[b]=NULL;
        puts(strst);
        scanf("%d",&num);

    }
    return 0;
}
