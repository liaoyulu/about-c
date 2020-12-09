#include <cstdio>
typedef int ElemType; 
# include <iostream>
using namespace std;
# include <stdlib.h> 
# include "iomanip"

typedef struct Node {
 ElemType data;
struct  Node *next;
}LNode,*LinkList;

void CreateList_Rear(LinkList &L,ElemType a[],int n ) 
{   // ��֪һά����A[n]�д������Ա������Ԫ�أ�����β�巨����������L
   LinkList p,q;   int i;
	  L=(LinkList)malloc(sizeof(LNode));    //������һ����� 
	q=L;// qʼ��ָ��β��㣬��ʼʱβ���Ҳ��ͷ���
	q->data=a[0];                                
	for(i=1;i<n;i++) 
	{  p=(LinkList)malloc(sizeof(LNode));          // �����½��
       p->data=a[i];                               // ��Ԫ��ֵ
       q->next=p;                                  // ������β���֮��
       q=p;                                         // qָ���µı�β
     }
   q->next=NULL;                                    // ��β���next���ÿ�
}// CreateList_Rear

bool ListInsert( LinkList &L, int i, ElemType e) 
{    //�ڲ�����ͷ���ĵ�����L�еĵ�i�����֮ǰ����Ԫ��e
	LinkList p,s;
  int j;
  p=L;  j=1;
  if(i==1){s=(LNode *)malloc(sizeof(LNode));s->data=e;s->next=p;L=s;return true;}
  else{
  while(p->next&&j<i-1)  { p=p->next; j++; }   // Ѱ�ҵ�i-1�����,����pָ��˽��
  if(j!=i-1)   return false;                   // i��λ�ò�����
  if((s=(LNode *)malloc(sizeof(LNode)))==NULL) exit(1);  // �洢����ʧ��
  s->data=e;  
  s->next=p->next;  p->next=s;                  // �����½��
  return true;
  } 

 }// ListInsert
 bool ListDelete( LinkList &L, int i, ElemType &e) 
{    // ɾ������ͷ���ĵ�����L�еĵ�i����㣬����e������ֵ
LinkList p,q;
  int j;
  p=L;  j=1;
  if(i== 1){
  	L=L->next;
  	p->next=NULL;
  	free(p);
  	return true;
  }
  else{
  	while(p->next&&j<i-1){ p=p->next; j++; } //Ѱ�ҵ�i-1�����,����pָ��˽��
  	if(j!=i-1)   return false;                     // i��λ�ò�����
  	q=p->next;                                     // qָ������
	p->next=q->next;                               // ɾ��q��ָ���
	e=q->data;    free(q);
  	return true;
  } 
 }// ListDelete
 void ListTraverse(LinkList L)
{
 LinkList p=L;
 while(p)
  {  cout<< setw(6)<<p->data;
     p=p->next;
  }
cout<<endl;
}
 int main(){
 	LinkList L;
 	int e;
 	int a[8]={1,2,3,4,5,6,8,9};
 	CreateList_Rear(L,a,8);
 	ListTraverse(L);
 	ListInsert(L,1,2);
 	ListTraverse(L);
 	ListDelete(L,1,e);
 	ListTraverse(L);
 	ListInsert(L,7,7);
 	ListTraverse(L);
	ListDelete(L,7,e);
	ListTraverse(L); 
 	
 }
