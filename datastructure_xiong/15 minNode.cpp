/*5������һ����������д�ܹ�������й��ܵ��㷨��
���ҳ���Сֵ�Ľ�㣬�Ҵ�ӡ����ֵ��
��������ֵ��������������ֱ�Ӻ�̽�㽻����
��������ֵ��ż��������ֱ�Ӻ�̽��ɾ����*/

#include <stdio.h>
#include <stdlib.h>
#include "iomanip"
#include <iostream>
using namespace std;
#include "LinkList.h"
typedef int ElemType; 

ElemType MinNode(LinkList &l){
	LinkList p,q,s;
	ElemType temp;
	p=l->next;
	ElemType min=p->data;
	p=p->next;
	while(p->next){
		if(p->data<min){
			min=p->data; //�ҳ���Сֵ�Ľ��
			q=p;
		} 
		p=p->next;
	}
	if(min%2 == 0){    //������ֵ��ż��������ֱ�Ӻ�̽��ɾ����
		s=q->next;
		q->next=s->next;
		free(s);
	}else{            //������ֵ��������������ֱ�Ӻ�̽�㽻����
		temp=q->next->data;
		q->next->data=q->data;
		q->data=temp;	
	}
	return min; 
}  
int main(){
 	int a[6]={3,4,1,5,6,9};
 	LinkList L;
	CreateList_L_Rear(L,a,6);
	int e=MinNode(L);
	cout<<e<<endl;
	ListTraverse_L(L);
} 


