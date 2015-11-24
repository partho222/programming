#include <stdio.h>


#define LLI long long
#define LLU unsigned long long
#define iscan(a) scanf("%d",&a)
#define lscan(a) scanf("%lld",&a)
#define uscan(a) scanf("%llu",&a)
#define dscan(a) scanf("%lf",&a)

int main()
{
	//freopen("in","r",stdin);
	int test,kase=0;
	iscan(test);
	while(test--)
	{
        int len,hi,wid;
        iscan(len);
        iscan(wid);
        iscan(hi);
        if(len>20 || wid >20 || hi>20)
        {
            printf("Case %d: bad\n",++kase);
        }
        else
        {
            printf("Case %d: good\n",++kase);
        }
	}

	return 0;
}
