
#include <stdio.h>
int main(){
	int x,y,a;
	printf("请输入两个数字:");scanf("%d%d",&x,&y);
	do{
	a=y;
	y=x%y;
	x=a;}while (y!=0);
	printf("这两个数的最大公因数是：%d",a);
}
