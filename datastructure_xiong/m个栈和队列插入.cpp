typedef int ElemType;     // ����Ԫ������Ϊint
# include "stdlib.h"      // ���ļ�����malloc()��realloc()��free()�Ⱥ���
# include "iomanip"     // ���ļ�������׼���������cout��cin�����Ʒ�setw()
# include <iostream>
using namespace std;
# define M 20

typedef struct{
	ElemType a[M];
	int front,rear,top;
}QueueStack;

void Init_QS(QueueStack &QS){
	QS.front=0;
	QS.rear=0;
	QS.top=M;
}
bool EnQueue(QueueStack &QS,ElemType e){
	if(QS.rear==QS.top) return false;
	else{
		QS.a[QS.rear]=e;
		QS.rear=(QS.rear+1)%M;
		return true;
	}
} 
bool EnStack(QueueStack &QS,ElemType e){
	
	if(QS.rear==QS.top) return false;
	else{
		QS.a[--QS.top]=e;
		return true;
	}
}
int main(){
	QueueStack QS;
	int a[20]={0};
	Init_QS(QS);
	if(EnStack(QS,5)){
		cout<<QS.a[QS.top]<<endl;
	} 
	if(	EnQueue(QS,7)){
		cout<<QS.a[QS.rear-1]<<endl;
	}

}
