/*5．设有一个单链表，编写能够完成下列功能的算法：
①找出最小值的结点，且打印该数值；
②若该数值是奇数，则将其与直接后继结点交换；
③若该数值是偶数，则将其直接后继结点删除。*/

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
			min=p->data; //找出最小值的结点
			q=p;
		} 
		p=p->next;
	}
	if(min%2 == 0){    //若该数值是偶数，则将其直接后继结点删除。
		s=q->next;
		q->next=s->next;
		free(s);
	}else{            //若该数值是奇数，则将其与直接后继结点交换；
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


