#include <stdio.h>
int main()
{
	int m,i,j,n[1000],flag=1;
	double ans=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&n[i]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n[i];j++)
		{
			ans=ans+(1/(double)(j+1))*flag;
			flag=-flag;
		}
		flag=1;
		printf("%.2f\n",ans);
		ans=0;
	}
}
