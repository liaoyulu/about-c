#include <stdio.h>
int main(){
	int a[100]={0},b=0,c,i,j;
	for(i=2;i<=10;i++){
		for(j=1;j<=100;j++){
			if(j%i==0)
				a[j]=1;
		}
	}
	a[2]=0;a[3]=0;a[5]=0;a[7]=0;
	for(i=1;i<=100;i++){
		if(a[i]==0){
			printf("%3d",i);
			b+=1;
		}
		if(a[i]==0&&b%5==0)
			printf("\n");
	}
	return 0;
}
