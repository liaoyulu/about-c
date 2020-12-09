#include <stdio.h>
int main(){
	int n,num=0;
	scanf("%d",&n);
	while((n%2==1&&n!=1)||n%2==0){
		if(n%2==1){
			n = n * 3 + 1;
			n /= 2;
			num++;
		}
		else{
			n /= 2;
			num++;
		}
	}
	printf("%d",num);
}
