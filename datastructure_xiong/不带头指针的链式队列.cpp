typedef int ElemType;     // 链队元素类型为int
# include "stdlib.h"      // 该文件包含malloc()、realloc()和free()等函数
# include "iomanip"     // 该文件包含标准输入输出流cout、cin及控制符setw()
# include "LinkList.h" 

typedef struct queue{
	ElemType data;
	struct queue *next;
}queue,* QueuePtr;
typedef struct {
	QueuePtr  rear;
	 int length;
} LinkQueue;

/*初始化算法*/
 void InitQueue_NF(LinkQueue &Q){
 	Q.rear=(queue *)malloc(sizeof(	queue));
    Q.rear->next=Q.rear;             
}// InitQueue_NF
/*入队列算法*/
 bool EnQueue_NF (LinkQueue &Q, ElemType e) 
{     // 插入元素e为链队Q中新的队尾元素
   QueuePtr s;
  if((s=(queue *)malloc(sizeof(	queue)))==NULL) return false;  // 存储分配失败
   s->data = e;                             // 把e的值作为新结点的值域
   s->next = Q.rear->next;                          // 新结点的指针域置空
	Q.rear->next=s;
	Q.rear=s;
 return true;
}// EnQueue_NF
/*出队列算法*/
bool DeQueue_NF(LinkQueue &Q, ElemType &e)
{   //删除Q的队头元素，并用e返回其值。成功删除返回true；否则返回false
   QueuePtr p;
   if (Q.rear->next==Q.rear)            // 若链队为空，则返回"假"
      return false;
   p=Q.rear->next->next;                 
   e=p->data;                  // e返回队首元素的值
   Q.rear->next->next = p->next;            // 队首指针指向下一个结点
   free(p);                      // 回收原队首结点
   return true;
}// DeQueue_L
int main(){
	LinkQueue  Q;
	ElemType num;
	int i,x,a[]={6,8,16,2,34,56,7,10,22,45,62,88};
  	InitQueue_NF(Q);              // 初始化链队
  for(i=0;i<12;i++){
  	  if(EnQueue_NF(Q,a[i]))       // a[i]依次进队
     { cout<<a[i]<<" "<<endl;}
  }
  for(i=0;i<12;i++){
		if(DeQueue_NF(Q,a[i]))
		cout<<a[i]<<"成功出列"<<endl ;
  } 

}
 
