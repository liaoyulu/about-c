#include <stdio.h>
int main(){
        int n,m,i,j,num=0;
        double average1[50]={0},average2[5]={0},score[50][5]={0};
        while((scanf("%d%d",&n,&m))!=EOF){
	for(i=0;i<n;i++){
                for(j=0;j<m;j++)
                        scanf("%lf",&score[i][j]);
        }
        for(i=0;i<n;i++){
                for(j=0;j<m;j++)
                        average1[i]+=score[i][j];
                printf("  %.2f",average1[i]/=m);
        }
	putchar('\n');	
        for(i=0;i<m;i++){
                for(j=0;j<n;j++)
                        average2[i]+=score[j][i];
                printf("  %.2f",average2[i]/=n);
        }     	      
	putchar('\n');
	for(i=0;i<n;i++){
		int p=0;
		for(j=0;j<m;j++){
			if(score[i][j]>=average2[j])
				p++;
		}
		if(p==m)
			num++;
	}
	printf("%d",num);
	}
}
