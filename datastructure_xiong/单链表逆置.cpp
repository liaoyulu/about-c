typedef int ElemType;       // 单链表中元素类型为int
# include <stdlib.h>        // 该文件包含malloc()、realloc()和free()等函数
#include <cstdio>
# include <iostream>  
using namespace std;// 该文件包含标准输入输出流cout和cin及控制符setw()
#include "iomanip"
# include "LinkList.h"      // 该文件中包含单链表数据对象的描述及相关操作

void ReverseList(LinkList &head)
{
	LinkList p,q;
	p=head->next;
    head->next=NULL;
	while(p)
	{
		/*向后挪动一个位置*/
		q=p;
		p=p->next;
		
		/*头插*/
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
