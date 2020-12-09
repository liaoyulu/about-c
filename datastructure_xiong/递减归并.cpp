typedef int ElemType;       // ��������Ԫ������Ϊint
# include <stdlib.h>        // ���ļ�����malloc()��realloc()��free()�Ⱥ���
#include <cstdio>
# include <iostream>  
using namespace std;// ���ļ�������׼���������cout��cin�����Ʒ�setw()
#include "iomanip"// 
# include "LinkList.h"  

void merge_L(LinkList La,LinkList Lb, LinkList &Lc){
	LinkList s,p,qa,qb;
	s=La->next;
	p=Lb->next; 
	Lc=La;Lc->next=NULL; 
	while(s&&p){
		if(s->data<p->data){
			qa=s;
			s=s->next;
			qa->next=Lc->next;
			Lc->next=qa;
		}else if(s->data>p->data){
			qb=p;
			p=p->next;
			qb->next=Lc->next;
			Lc->next=qb; 
		}else{
			qa=s;
			qb=p;
			s=s->next;
			p=p->next;
			qa->next=Lc->next;
			Lc->next=qa;
			free(qb);
		}
	}
	while(s){
			qa=s;
			s=s->next;
			qa->next=Lc->next;
			Lc->next=qa;
	} 
	while(p){
			qb=p;
			p=p->next;
			qb->next=Lc->next;
			Lc->next=qb; 	
	}
}


int main(){
	LinkList La,Lb,Lc;
	int a[5]={1,3,5,7,9};
	int b[5]={2,4,5,8,9}; 
	CreateList_L_Rear(La,a,5);
	CreateList_L_Rear(Lb,b,5); 
	merge_L(La,Lb,Lc);
	ListTraverse_L(Lc);
}
