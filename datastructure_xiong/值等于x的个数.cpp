typedef int ElemType;       // ��������Ԫ������Ϊint
# include <stdlib.h>        // ���ļ�����malloc()��realloc()��free()�Ⱥ���
#include <cstdio>
# include <iostream>  
using namespace std;// ���ļ�������׼���������cout��cin�����Ʒ�setw()
#include "iomanip"// 
# include "LinkList.h"  

int count_L(LinkList L,ElemType x){
	int sum=0;
	LinkList p=L->next;
	while(p){
		if(p->data==x)
			sum++;
			p=p->next;
		} 
	return sum; 
} 
int main(){
	LinkList L; 
	int sum;
	int a[7]={1,2,3,4,5,5,5}; 
	
	CreateList_L_Rear(L,a,7);
	ListTraverse_L(L);
	sum=count_L(L,5);
	cout<<sum;
	
} 
