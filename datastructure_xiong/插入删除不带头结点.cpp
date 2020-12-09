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
{   // 已知一维数组A[n]中存有线性表的数据元素，利用尾插法创建单链表L
   LinkList p,q;   int i;
	  L=(LinkList)malloc(sizeof(LNode));    //创立第一个结点 
	q=L;// q始终指向尾结点，开始时尾结点也是头结点
	q->data=a[0];                                
	for(i=1;i<n;i++) 
	{  p=(LinkList)malloc(sizeof(LNode));          // 创建新结点
       p->data=a[i];                               // 赋元素值
       q->next=p;                                  // 插入在尾结点之后
       q=p;                                         // q指向新的表尾
     }
   q->next=NULL;                                    // 表尾结点next域置空
}// CreateList_Rear

bool ListInsert( LinkList &L, int i, ElemType e) 
{    //在不带有头结点的单链表L中的第i个结点之前插入元素e
	LinkList p,s;
  int j;
  p=L;  j=1;
  if(i==1){s=(LNode *)malloc(sizeof(LNode));s->data=e;s->next=p;L=s;return true;}
  else{
  while(p->next&&j<i-1)  { p=p->next; j++; }   // 寻找第i-1个结点,并让p指向此结点
  if(j!=i-1)   return false;                   // i的位置不合理
  if((s=(LNode *)malloc(sizeof(LNode)))==NULL) exit(1);  // 存储分配失败
  s->data=e;  
  s->next=p->next;  p->next=s;                  // 插入新结点
  return true;
  } 

 }// ListInsert
 bool ListDelete( LinkList &L, int i, ElemType &e) 
{    // 删除带有头结点的单链表L中的第i个结点，并让e返回其值
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
  	while(p->next&&j<i-1){ p=p->next; j++; } //寻找第i-1个结点,并让p指向此结点
  	if(j!=i-1)   return false;                     // i的位置不合理
  	q=p->next;                                     // q指向其后继
	p->next=q->next;                               // 删除q所指结点
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
