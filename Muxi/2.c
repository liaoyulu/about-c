#include <stdio.h>
int main(){
	int a,b;
	printf("输入两门课的成绩：");scanf("%d%d",&a,&b);
	switch(a>=0&&a<=100&&b>=0&&b<=100){
	case 1:switch(a>=60&&b>=60){
		       case 1:puts("it is pass"); break;
			case 0:puts("it is not pass"); break;
	       } break;
	case 0:puts("it is error");break;
	}
	return 0;
}
