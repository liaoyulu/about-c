#include <stdio.h>
#include<math.h>
int main()
{
	double R1,R2,P1,P2,real,imag;
	char sign;
	scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
	real=R1*cos(P1)*R2*cos(P2)-R1*sin(P1)*R2*sin(P2);
	imag=R1*sin(P1)*R2*cos(P2)+R2*sin(P2)*R1*cos(P1);
	sign=imag<0?' ':'+';
	printf("%.2f%c%.2fi",real,sign,imag);
}

