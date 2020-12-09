typedef int ElemType;       // 单链表中元素类型为int
# include <stdlib.h>        // 该文件包含malloc()、realloc()和free()等函数
#include <cstdio>
# include <iostream>  
using namespace std;// 该文件包含标准输入输出流cout和cin及控制符setw()
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
