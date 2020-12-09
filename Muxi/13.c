#include <stdio.h>
int main(){
	int n,i,temp,min,a[100]={0};
	do{
		scanf("%d",&n);
		for(i = 0;i < n;i++)
			scanf("%d",&a[i]);
		min=a[0];
		for(i = 1;i < n;i++){
			if(a[i] <= min)
				min = i;
		}
		temp = a[min];
		a[min] = a[0];
		a[0] = temp;
		for(i = 0;i < n;i++)
			printf("%d ",a[i]);
	}while(n != 0);
}
