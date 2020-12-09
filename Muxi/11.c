#include<stdio.h>
int main(){
	int n,m,i,j,temp,money[100000]={0};
	while((scanf("%d%d",&n,&m)) != EOF){
		do{
			for(i = 0;i < n;i++)
				scanf("%d",&money[i]);
			for(i = 0;i < m;i++){
				for(j = n-1;j > i;j--){
					if(money[j]>money[j-1]){
						temp=money[j];
						money[j]=money[j-1];
						money[j-1]=temp;
					}
				}
				printf("%d ",money[i]);
			}

		}while(n!=0&&m!=0);
	}
}
