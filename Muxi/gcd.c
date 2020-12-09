#include <stdio.h>
int gcd(int x,int y){
	int a;
	a=y; 
	y=x%y;
	x=a;
	if(y==0)return x;
	else return gcd(x,y);
}
int main(){
	int c,d;
	printf("请输入两个数");scanf("%2d%2d",&c,&d);
	printf("公约数是：%d",gcd(c,d));
	return 0;
}

	
