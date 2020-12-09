#include <stdio.h>
#define number 80
void rev_intary(int v[],int n){
	int i,j,temp;
        for(i=1;i<=n-1;i++){
                for(j=n;j>=i+1;j--){
                        if(v[j]>v[j-1]){
                                 temp=v[j];
			         v[j]=v[j-1];
			         v[j-1]=temp;
		        }
		}
        printf("%d\n",v[i]);
	}
	printf("%d\n",v[i]);
}
int main(){
	int a[number];
	int i,n,b,c;
	puts("请输入需要的数字个数：");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("a[%d]:",i);
	       	scanf("%d",&a[i]);
	}
        rev_intary(a,n);
        return 0;
}
