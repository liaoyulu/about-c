 #include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "iomanip"

typedef int ElemType;
typedef char TElemType;

TElemType Nil='#'; 
typedef struct BiTNode {
  TElemType data;                            // ����ֵ
  struct BiTNode *lchild;                    // ����ָ��
  struct BiTNode *rchild;                    // �Һ���ָ��
}BiTNode,*BiTree;
void InitBiTree(BiTree &BT)
 {          
   BT=NULL;
 }// InitBiTree 

void CreateBiTree(BiTree &BT)
{  // �������������������н���ֵ�����������BT������Nil��ʾ��(��)����
TElemType a;
cin>>a;                                         // �������ֵ
   if(a==Nil)                                        // ����ֵΪ��
	   BT=NULL;
   else                                              // ����ֵ��Ϊ��
   { BT=(BiTree)malloc(sizeof(BiTNode));             // ���ɸ����
     if(!BT)
       exit(1);
     BT->data=a;                                     // ��ֵ����T��ָ���
     CreateBiTree(BT->lchild);                       // �ݹ鹹��������
     CreateBiTree(BT->rchild);                       // �ݹ鹹��������
   }
}// CreateBiTree
	int num=0; 
ElemType  countLeaf(BiTree T){

	if(!T) return 0;
	if(!T->lchild&&!T->rchild) num++;
	else{
		countLeaf(T->lchild);
		countLeaf(T->rchild);
	} 
}//countLeaf
int main(){
	BiTree T;
	InitBiTree(T);
	CreateBiTree(T);
	countLeaf(T);
	cout<<num<<endl; 
} 
