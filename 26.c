#include <stdio.h>
int gcd(int x,int y)
{
	int a;
	a=y;y=x%y;x=a;
	if(y==0)
		return x;
	else 
		return gcd(x,y);
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",x*y/gcd(x,y));
}

	
