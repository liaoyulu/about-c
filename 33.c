#include <stdio.h>
int main(){
	int N,i,j;
	char C;
	scanf("%d %c",&N,&C);//N正方形边长，C组成正方形的某种字符
	for(i = 1; i <= (N+1)/2; i++){
		for(j = 1; j <= N; j++){
			if(i==1||i==(N+1)/2||j==1||j==N)
				printf("%c",C);
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
