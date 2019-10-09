#include <stdio.h>
int main(){
	double v[3];
	printf("请输入三个数：");scanf("%lf%lf%lf",&v[0],&v[1],&v[2]);
	int i,j,temp;
        for(i=0;i<2;i++){
                for(j=2;j>=i+1;j--){
                        if(v[j]>v[j-1]){
                                 temp=v[j];
			         v[j]=v[j-1];
			         v[j-1]=temp;
		        }
		}
	}
	if(v[2]+v[1]>v[0]){
		if(v[0]==v[1]&&v[1]==v[2])
			puts("1");
		else if(v[0]==v[1]||v[1]==v[2]||v[0]==v[2])
			puts("2");
		else
			puts("3");}
	else
		puts("0");
	return 0;
}
	
