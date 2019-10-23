#include<stdio.h>
int main()
{
	int n,num[10]={0},sum=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			sum+=num[i]*10+num[j];
		sum-=num[i]*10+num[i];
	}
	printf("%d",sum);
}
	
	

