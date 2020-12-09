#include <stdio.h>
#include <iostream>
using namespace std;
#include "iomanip"
typedef int ElemType;

void InputSymmetry(ElemType a[],int n){
	for(int i=0; i<n*(n+1)/2;i++){
		cin>>a[i];
	}
}//�Ӽ�������n�׶Գƾ��� ��ѹ���� 
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
}//�������
 
int main(){
	ElemType A[20],B[20],C[20];
	int n;
	cout<<"����Ľ�����" ;
	cin>>n; 
	cout<<"����A:"<<endl;
	InputSymmetry(A,n);
	PrintSymmetry(A,n);
	cout<<"����B:"<<endl;
	InputSymmetry(B,n);
	PrintSymmetry(B,n);	
	Add(A,B,C,n);
	cout<<"��������Ӻ�ľ���C��"<<endl; 
	PrintSymmetry(C,n);	
} 
