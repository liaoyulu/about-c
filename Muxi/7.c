#include <stdio.h>
#define number 1000
int main(){
	int a,v[number],b,product=1,i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
	for(i=0;i<n;i++){
		if(v[i]%2==1)
			product*=v[i];
	}
	printf("%d",product);
	return 0;
}

