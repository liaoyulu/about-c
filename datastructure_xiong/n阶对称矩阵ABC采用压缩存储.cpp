#include <stdio.h>
#include <iostream>
using namespace std;
#include "iomanip"
typedef int ElemType;

void InputSymmetry(ElemType a[],int n){
	for(int i=0; i<n*(n+1)/2;i++){
		cin>>a[i];
	}
}//从键盘输如n阶对称矩阵 （压缩后） 
void Add(ElemType A[],ElemType B[],ElemType C[],int n){
	for(int i=0;i<n*(n+1)/2;i++){
		C[i]=A[i]+B[i];
	}
} //A+B=C
void PrintSymmetry(ElemType a[],int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i>=j) cout<<setw(3)<<a[i*(i+1)/2+j];
			else cout<<setw(3)<<a[j*(j+1)/2+i];
		}
		cout<<endl;
	}
}//输出矩阵
 
int main(){
	ElemType A[20],B[20],C[20];
	int n;
	cout<<"矩阵的阶数：" ;
	cin>>n; 
	cout<<"矩阵A:"<<endl;
	InputSymmetry(A,n);
	PrintSymmetry(A,n);
	cout<<"矩阵B:"<<endl;
	InputSymmetry(B,n);
	PrintSymmetry(B,n);	
	Add(A,B,C,n);
	cout<<"两矩阵相加后的矩阵C："<<endl; 
	PrintSymmetry(C,n);	
} 
