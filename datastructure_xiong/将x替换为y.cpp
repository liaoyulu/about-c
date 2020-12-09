#include <stdio.h> 
#include "SLinkString.h"
# include "iomanip"     // 该文件包含标准输入输出流cout、cin及控制符setw()
# include <iostream>
# include <stdlib.h>  
using namespace std;

bool convert_xy(SLinkString &S,char x,char y){
	SLinkString p,q,s;
	p=S;
	while(p->next){
		if(p->next->str==x){
			p->next->str=y;
		}
		else{
			p=p->next;
		}
	}
} 
 
int main(){
	SLinkString S; 
	char *c="asdf";
	char x='a',y='b';
	StrAssign_L(S,c);
	StrTraveres_L(S);
	convert_xy(S,x,y); 
	StrTraveres_L(S); 
} 
