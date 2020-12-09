#include <stdio.h>
int main(){
	int n=5,i,j,k,a,b,c,d;
	for(i=1;i<=n/2+1;i++){
		for(j=1;j<=i-1;j++)
			putchar(' ');
		for(j=1;j<=(n-(i-1)*2);j++)
			putchar('*');
		putchar('\n');
	}
	for(i=1;i<=n/2;i++){
		for(j=1;j<=n-(i+1)*2;j++)
			putchar(' ');
		for(j=1;j<=i*2+1;j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}
