#include<stdio.h>
int main()
{
int T,t[1000]={0},i;
char ch[1000]={""};
scanf("%d",&T);
for(i=0;i<T;i++)
{
	scanf("%d",&t[i]);
	printf("%c",t[i]);
}
}
