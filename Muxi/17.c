#include<stdio.h>
#include<math.h>
int main()
{
	int isprime,m,n,i,j,num=1,p[10000]={0},a=0;	    
	scanf("%d %d",&m,&n);
	do
	{
		for(i=2;i<=10000;i++)
		{	
			isprime=1;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					isprime=0;
					break;
				}
			}
			if(isprime){p[num]=i;num++;}
		}
	}while(num<=n);	
	for(i=m;i<=n;i++)
	{
		printf("%d ",p[i]);
		a++;
		if(a%10==0)
			putchar('\n');
	}
}
			

