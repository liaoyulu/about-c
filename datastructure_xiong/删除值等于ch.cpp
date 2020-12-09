#include <stdio.h> 
#include "DSqString.h"
# include "iomanip"     // 该文件包含标准输入输出流cout、cin及控制符setw()
# include <iostream>
# include <stdlib.h>  
using namespace std;
void DeleteS(DSqString &S, char ch){
	int i=0,j=0,l;
	l=S.length;
	while (i<l){
		if(S.str[i]!=ch) {
			S.str[j]=S.str[i];
			j++;
		}
			i++;
		S.length=j;
	}
}
int main(){
	DSqString S; 
	char *c="asdf";
	char ch='a';
	StrAssign_Sq(S,c);
	StrTraveres_Sq(S);
	DeleteS(S,ch); 
	StrTraveres_Sq(S); 
}
