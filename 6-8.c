#include <stdio.h>
int main(){
	int v[5]={6,17,38,27,5};
	int min,a,b,i,n;
	scanf("%d",&a);
        int min_o(const int v[],int n)
	{for(i=0;i<=n;i++)
		if(v[i]<min)
		min=v[i];
		return min;}
	printf("%d",min_o(v,a));}
