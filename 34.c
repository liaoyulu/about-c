#include <stdio.h>
#include <stdbool.h>
int main(){
	int n,i,ashout,bshout,apadd,bpadd,a=0,b=0;
	bool flaga,flagb;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		scanf("%d %d %d %d",&ashout,&apadd,&bshout,&bpadd);
		if(ashout+bshout==apadd)
			flaga=1;
		if(ashout+bshout==bpadd)
			flagb=1;
		if(flaga&&!flagb)
			b++;
		if(flagb&&!flaga)
			a++;
		flaga=0;flagb=0;
	}
	printf("%d %d",a,b);
}

