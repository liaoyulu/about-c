#include <stdio.h>
#define number 1000
int main(){
        int a,v[number],i,j,n,sum,temp;
	double average;
        scanf("%d",&n);
        for(i=0;i<n;i++)
                scanf("%d",&v[i]);
        for(i=0;i<n-1;i++){

                        for(j=n-1;j>=i+1;j--){
                                if(v[j]>v[j-1]){
                                        temp=v[j];
                                        v[j]=v[j-1];
                                        v[j-1]=temp;
                                }
                        }
                }
	for(i=1;i<n-1;i++)
		sum+=v[i];
	average=sum/(n-2);
	printf("%.2f",average);
	return 0;
}

	
