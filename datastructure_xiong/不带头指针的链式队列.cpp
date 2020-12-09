typedef int ElemType;     // ����Ԫ������Ϊint
# include "stdlib.h"      // ���ļ�����malloc()��realloc()��free()�Ⱥ���
# include "iomanip"     // ���ļ�������׼���������cout��cin�����Ʒ�setw()
# include "LinkList.h" 

typedef struct queue{
	ElemType data;
	struct queue *next;
}queue,* QueuePtr;
typedef struct {
	QueuePtr  rear;
	 int length;
} LinkQueue;

/*��ʼ���㷨*/
 void InitQueue_NF(LinkQueue &Q){
 	Q.rear=(queue *)malloc(sizeof(	queue));
    Q.rear->next=Q.rear;             
}// InitQueue_NF
/*������㷨*/
 bool EnQueue_NF (LinkQueue &Q, ElemType e) 
{     // ����Ԫ��eΪ����Q���µĶ�βԪ��
   QueuePtr s;
  if((s=(queue *)malloc(sizeof(	queue)))==NULL) return false;  // �洢����ʧ��
   s->data = e;                             // ��e��ֵ��Ϊ�½���ֵ��
   s->next = Q.rear->next;                          // �½���ָ�����ÿ�
	Q.rear->next=s;
	Q.rear=s;
 return true;
}// EnQueue_NF
/*�������㷨*/
bool DeQueue_NF(LinkQueue &Q, ElemType &e)
{   //ɾ��Q�Ķ�ͷԪ�أ�����e������ֵ���ɹ�ɾ������true�����򷵻�false
   QueuePtr p;
   if (Q.rear->next==Q.rear)            // ������Ϊ�գ��򷵻�"��"
      return false;
   p=Q.rear->next->next;                 
   e=p->data;                  // e���ض���Ԫ�ص�ֵ
   Q.rear->next->next = p->next;            // ����ָ��ָ����һ�����
   free(p);                      // ����ԭ���׽��
   return true;
}// DeQueue_L
int main(){
	LinkQueue  Q;
	ElemType num;
	int i,x,a[]={6,8,16,2,34,56,7,10,22,45,62,88};
  	InitQueue_NF(Q);              // ��ʼ������
  for(i=0;i<12;i++){
  	  if(EnQueue_NF(Q,a[i]))       // a[i]���ν���
     { cout<<a[i]<<" "<<endl;}
  }
  for(i=0;i<12;i++){
		if(DeQueue_NF(Q,a[i]))
		cout<<a[i]<<"�ɹ�����"<<endl ;
  } 

}
 
