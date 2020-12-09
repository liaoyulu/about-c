#include<stdio.h>
int main()
{	
	int m,n,x,y,T,i,k,h,j,max=0,sum=0,v[1000][1000];
	scanf("%d",&T);
	for(i = 0; i < T; i++)
	{
		scanf("%d %d %d %d",&m,&n,&x,&y);
		for(i = 0; i < m;i++)
		{
			for(j = 0; j < n; j++)
				scanf("%d",&v[i][j]);
		}
		for(k = 0; k < m-x+1 ; k++)
		{
			for(h = 0; h<n-y+1 ;h++ )
			{

				for(i = k; i < x+k ;i++)
				{
					for(j = h; j < y+h ;j++)
					sum+=v[i][j];
				}
				if(sum > max)
					max=sum;
				sum=0;
			}
		}
		printf("%d",max);
	}
}
