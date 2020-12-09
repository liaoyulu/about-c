#include<stdio.h>
int main()
{
	int a,b,d_a,d_b,sum_a=0,sum_b=0;
	scanf("%d %d %d %d",&a,&d_a,&b,&d_b);
	do{
		if(a%10==d_a)
		{
			sum_a=sum_a*10+d_a;
			a/=10;
		}
		else
			a/=10;
		if(b%10==d_b)
		{
			sum_b=sum_b*10+d_b;
			b/=10;
		}
		else
			b/=10;
	}while(a!=0||b!=0);
	printf("%d",sum_a+sum_b);
}

