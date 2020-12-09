typedef int ElemType;     // 链队元素类型为int
# include "stdlib.h"      // 该文件包含malloc()、realloc()和free()等函数
# include <iostream>
using namespace std; 
# include "iomanip"     // 该文件包含标准输入输出流cout、cin及控制符setw()
# include "SqStack.h"   // 该文件包含链队数据对象的描述及相关操作
void backorder(){
	int x,num;
	SqStack S;
	InitStack_Sq(S);
	cout<<"请输入数字个数"<<endl; 
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
