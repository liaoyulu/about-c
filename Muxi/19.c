#include <stdio.h>
#include <math.h>
int main()
{
	int N,i,a,b;
	double r[10000],max=0;
	scanf("%d",&N);
	for(i = 0;i < N; i++)
	{
		scanf("%d%d",&a,&b);
		if(a < 1000&&b < 1000)
		{
			r[i]=sqrt(a*a+b*b);
			if(r[i] > max)
				max=r[i];
		}
		else
			i--;
		
	}
	printf("%.2f",max);
}

