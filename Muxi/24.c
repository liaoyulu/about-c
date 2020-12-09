#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        char* n=NULL;
        int i,sum=0;
	n = (char*)malloc( 100*sizeof(char) ); 
	 if(!n)
	 {
		 printf("创建数组失败！\n");
		 exit(1);
	}
	free(n);
	scanf("%s",n);
        for(i=0;i<strlen(n);i++)
        {
                sum=sum+n[i] - '0';
        }
        do{
                switch(sum%10)
                {
                        case 1:printf("yi "); break;
                        case 2:printf("er ");break;
                        case 3:printf("san ");break;
                        case 4:printf("si ");break;
                        case 5:printf("wu ");break;
                        case 6:printf("liu ");break;
                        case 7:printf("qi ");break;
                        case 8:printf("ba ");break;
                        case 9:printf("jiu ");break;

                }
                sum=sum/10;
        }while(sum!=0);
}
