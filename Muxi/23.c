#include <stdio.h>
int main()
{
	int v[10]={0},i;
	long long N;
	scanf("%lld",&N);
	while(N > 0)
	{
		v[N%10]++;
		N/=10;
	}
	for(i=0;i<=9;i++)
		if(v[i] > 0)
			printf("%d:%d\n",i,v[i]);
}
