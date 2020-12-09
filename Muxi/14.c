#include <stdio.h>
int main(){
	int t,a[10],b[10],c[10],i;
	scanf("%d",&t);
	for(i = 0;i < t; i++)
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	for(i = 0;i < t; i++){
		if(a[i] + b[i] > c[i])
			printf("Case #%d：true\n",i + 1);
		else
			printf("Case $%d：false\n",i + 1);
		
	}
}
