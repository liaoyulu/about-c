#include <stdio.h>
#include <time.h>
#define CLK_TCK 100
int main()
{
	long c1,c2,t;
	scanf("%ld%ld",&c1,&c2);
	t=c2-c1;
	if(t % CLK_TCK >= 50)
	{
        	t = t / CLK_TCK + 1; 
	}
       	else
	t = t / CLK_TCK;
	printf("%ld:%ld:%ld",t/3600,(t%3600)/60,t%60);

}
