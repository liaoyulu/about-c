typedef int ElemType;     // ����Ԫ������Ϊint
# include "stdlib.h"      // ���ļ�����malloc()��realloc()��free()�Ⱥ���
# include <iostream>
using namespace std; 
# include "iomanip"     // ���ļ�������׼���������cout��cin�����Ʒ�setw()
# include "SqStack.h"   // ���ļ������������ݶ������������ز���
void backorder(){
	int x,num;
	SqStack S;
	InitStack_Sq(S);
	cout<<"���������ָ���"<<endl; 
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>x;
		Push_Sq(S,x);
	}
	while(!StackEmpty_Sq(S)){
		Pop_Sq(S,x);
		cout<<x<<" "; 
	}
}
int main(){
	backorder();
}
