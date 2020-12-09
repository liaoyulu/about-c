#include "TSMatrix.h" 
ElemType SumDiagnols(TSMatrix &M ){
	ElemType sum;
	for(int k=0;k<M.t;k++){
		if(M.data[k].i==M.data[k].j||M.data[k].i+M.data[k].j==M.n-1){
			sum+=M.data[k].e;
		}
	} 
	return sum;
} 
int main(){
	TSMatrix M;
	 CreateSMatrix(M);
	 cout<<SumDiagnols(M);
	 
}
