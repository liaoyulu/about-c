#include <stdio.h>
int main(){
	int T,n,i,j,max=0,height[10]={0};
	scanf("%d", &T);
	for(i = 0; i < T; i++){
		scanf("%d", &n);
		for(j = 0; j < n; j++){
			scanf("%d",&height[j]);
			if (height[j] > max)
			max = height[j];
		}
		printf("%d",max);
	}
}
		

