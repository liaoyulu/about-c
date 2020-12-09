#include <stdio.h>
int main(){
	int num,k,i;
	scanf("%d",&num);
	k=num/100;
	for(i = 0; i < k; i++)
		printf("B");
	num=num-k*100;
	k=num/10;
	for(i = 0; i < k; i++)
		printf("S");
	k=num%10;
	for(i = 1; i <= k; i++)
		printf("%d",i);
}
