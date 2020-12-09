#include <stdio.h>
int main(){
        int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int month,year,day,i,ans;
        while(scanf("%d/%d/%d",&year,&month,&day)!=EOF){
                if(year%4==0&&year%100!=0||year%400==0)
                        d[2]=29;
                for(i=0;i<month;i++)
                        ans+=d[i];
                printf("%d",ans+day);
                return 0;
        }
}
