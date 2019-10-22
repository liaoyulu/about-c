#include <stdio.h>
int main()
{
	int i,n,x[1000]={0},y[1000]={0,2,0};//第i布最后可能跳到a的次数；第i布最后跳到b或c的次数
	
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		for(i=2;i<=n;i++)
		{
			x[i]=y[i-1];
			y[i]=x[i-1]*2+y[i-1];
		}
		printf("%d\n",x[n]);
	}
}
