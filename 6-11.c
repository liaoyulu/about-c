#include <stdio.h>
#define number 80
int search_idx(const int v[],int dix[],const int key,int n){
	int a=0,i;
	for(i=0;i<n;i++){
		if(v[i]==key){
			dix[a]=i;
			a+=1;
		}
	}
	return a;
}
	
int main(){

        int v[7]={1,7,5,7,2,4,7},key,dix[number]={0},n=7;
        printf("%3d%3d%3d%3d%3d%3d%3d",v[0],v[1],v[2],v[3],v[4],v[5],v[6]);
        printf("你想查找的数是:");scanf("%d",&key);
        printf("有%d个该数",search_idx(v,dix,key,n));
	return 0;
}	
