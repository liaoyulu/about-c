#include <stdio.h> 
#include "SLinkString.h"
# include "iomanip"     // ���ļ�������׼���������cout��cin�����Ʒ�setw()
# include <iostream>
# include <stdlib.h>  
using namespace std;

bool Delete_ch(SLinkString &S,char ch){
	SLinkString p,q,s;
	p=S;
	while(p->next){
		if(p->next->str==ch){
			q=p->next;
			p->next=q->next;
			free(q);
		}
		else{
			p=p->next;
		}
	}
} 
 
int main(){
	SLinkString S; 
	char *c="asdf";
	char ch='a';
	StrAssign_L(S,c);
	StrTraveres_L(S);
	Delete_ch(S,ch); 
	StrTraveres_L(S); 
} 
