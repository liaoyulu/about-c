
typedef int ElemType; 
# include <iostream>
using namespace std;
# include <stdlib.h> 
# include "iomanip"
# include <stdio.h>
# include "LinkList.h"
# include "SqList.h" 

int ListInsert_Sq_2(SqList &L,ElemType e){
	int j=L.length-1;
	if(L.length==L.listsize) return 0;
	while(L.elem[j]>e){
		L.elem[j+1]=L.elem[j];
		j--;
	}
	L.elem[j+1]=e;
}



 int main(){
 	SqList L2={{1,2,3,4,5,9},6, 9,2}; 

	ListInsert_Sq_2(L2,8);
	ListTraverse_Sq(L2);
 	
 }
 
 
