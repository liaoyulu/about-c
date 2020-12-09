 #include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
#include "iomanip"

typedef int ElemType;
typedef char TElemType;

TElemType Nil='#'; 
typedef struct BiTNode {
  TElemType data;                            // 结点的值
  struct BiTNode *lchild;                    // 左孩子指针
  struct BiTNode *rchild;                    // 右孩子指针
}BiTNode,*BiTree;
void InitBiTree(BiTree &BT)
 {          
   BT=NULL;
 }// InitBiTree 

void CreateBiTree(BiTree &BT)
{  // 按先序次序输入二叉树中结点的值，构造二叉树BT。变量Nil表示空(子)树。
TElemType a;
cin>>a;                                         // 输入结点的值
   if(a==Nil)                                        // 结点的值为空
	   BT=NULL;
   else                                              // 结点的值不为空
   { BT=(BiTree)malloc(sizeof(BiTNode));             // 生成根结点
     if(!BT)
       exit(1);
     BT->data=a;                                     // 将值赋给T所指结点
     CreateBiTree(BT->lchild);                       // 递归构造左子树
     CreateBiTree(BT->rchild);                       // 递归构造右子树
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
