
#include <stdio.h>
#define number 1000
int abs(int x){
        if(x<0)
                x=-x;
        return x;
}
int main(){
        int i,j,a,b,temp,n,v[number];
        do{
                scanf("%d",&n);
                for(i=0;i<n;i++)
                        scanf("%d",&v[i]);
		for(i=0;i<n-1;i++){

                	for(j=n-1;j>=i+1;j--){
                        	if(abs(v[j])>abs(v[j-1])){
                                	temp=v[j];
                                	v[j]=v[j-1];
                                 	v[j-1]=temp;
                        	}
			}
		}
		for(i=0;i<n;i++)
		printf(" %d",v[i]);

        }while(n!=0);
		
	return 0;

        
}  
