#include <stdio.h> 
#include "DSqString.h"
# include "iomanip"     // 该文件包含标准输入输出流cout、cin及控制符setw()
# include <iostream>
# include <stdlib.h>  
using namespace std;
int count_S(DSqString &S,DSqString St) {
	int j=0,i=0,count=0;
	for(i=0;i<=S.length-St.length+1;i++){
		for(j=0;j<St.length;j++){
			if(St.str[j]!=S.str[i+j])
			break;
		}
		if(j==St.length)
		count++;
	}
	return count;
}

int main(){
	DSqString S,St;
	int count;
	char *a="abjwnshdabjejudjab" ;
	char *b="ab";
	StrAssign_Sq(S,a);
	StrAssign_Sq(St,b);
	count=count_S(S,St);
	cout<<count<<endl;
}
