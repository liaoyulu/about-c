#include <stdio.h>
void mat_add(int a[3][3][4]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			a[2][i][j]=a[0][i][j]+a[1][i][j];
	}
}
void mat_print(const int m[3][3][4]){
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++)
			printf("%4d",m[i][j][k]);
		putchar('\n');
		}
		putchar('\n');
	}
}
int main(){
	int tensu1[3][3][4]={{{1,2,3,4},{1,2,3,4},{1,2,3,4}},{{2,3,4,5},{3,4,5,6},{4,5,6,7}}};
	mat_add(tensu1);
	mat_print(tensu1);
	return 0;
}
	

