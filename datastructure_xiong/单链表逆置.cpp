typedef int ElemType;       // ��������Ԫ������Ϊint
# include <stdlib.h>        // ���ļ�����malloc()��realloc()��free()�Ⱥ���
#include <cstdio>
# include <iostream>  
using namespace std;// ���ļ�������׼���������cout��cin�����Ʒ�setw()
#include "iomanip"
# include "LinkList.h"      // ���ļ��а������������ݶ������������ز���

void ReverseList(LinkList &head)
{
	LinkList p,q;
	p=head->next;
    head->next=NULL;
	while(p)
	{
		/*���Ų��һ��λ��*/
		q=p;
		p=p->next;
		
		/*ͷ��*/
		q->next=head->next;
		head->next=q;
	}
} 
int main()
{
	LinkList head;
	int a[]={6,8,16,2,34,56,7,10,22,45};
	CreateList_L_Rear(head, a, 10);
	ReverseList(head);
	ListTraverse_L(head);
} 
