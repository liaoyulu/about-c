#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,count=0;
	char cur[16],oldest[16]={'9'},youngest[16]={'0'};
	/*字符串在之间比大小*/
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%s %s", cur+11, cur);
		if(strcmp(cur,"1814/09/06") >= 0 && strcmp(cur,"2014/09/06") <= 0)
		{
			count++;
			if(strcmp(youngest,cur) <= 0)
				memcpy(youngest,cur,16);
			if(strcmp(oldest,cur) >= 0)
				memcpy(oldest,cur,16);
		}
	}
	printf("%d %s %s",count,oldest+11,youngest+11);
}
