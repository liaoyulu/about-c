typedef int ElemType;     // 链队元素类型为int
# include "stdlib.h"      // 该文件包含malloc()、realloc()和free()等函数
# include "iomanip"     // 该文件包含标准输入输出流cout、cin及控制符setw()
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
