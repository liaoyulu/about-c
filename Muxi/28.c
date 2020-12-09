#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,n,ans=0;
	char s[1000];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",s);
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]>='0'&&s[i]<='9')

				ans++;
		}
		printf("%d",ans);
		ans=0;
	}
}

