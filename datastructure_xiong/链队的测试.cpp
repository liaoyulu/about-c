typedef int ElemType;     // ����Ԫ������Ϊint
# include "stdlib.h"      // ���ļ�����malloc()��realloc()��free()�Ⱥ���
# include "iomanip"     // ���ļ�������׼���������cout��cin�����Ʒ�setw()
# include "LinkQueue.h"   // ���ļ������������ݶ������������ز���
	
int main()
 {
 LinkQueue myqueue;
  int i,x,a[]={6,8,16,2,34,56,7,10,22,45,62,88};
  InitQueue_L(myqueue);              // ��ʼ������
  for(i=0;i<12;i++)
  if(!EnQueue_L(myqueue,a[i]))       // a[i]���ν���
     { cout<<"����ʧ�ܣ�"<<endl;
       return 0;
     }
	if(!GetHead_L(myqueue,x))         // ����Ԫ�ز���ֵ��x
    {  cout<<"ȡ����Ԫ��ʧ�ܣ�"<<endl;
       return 0;
     }
	cout<<"��ǰ��������Ԫ���ǣ�"<<x<<endl;
	cout<<"��ǰ���ӵĳ����ǣ�"<<QueueLength_L(myqueue)<<endl;
	cout<<"���γ��ӵ�����Ԫ������Ϊ��";
    while(!QueueEmpty_L(myqueue))        // �ж����Ƿ�ǿ�
	{   if(!DeQueue_L(myqueue,x))         // ����Ԫ�س��Ӳ���ֵ��x
        {  cout<<"����ʧ�ܣ�"<<endl;
           return 0;
         }
		cout<<x<<' ';
	  }
	 cout<<endl;
	 cout<<"��ǰ���ӵĳ����ǣ�"<<QueueLength_L(myqueue)<<endl;
	 cout<<endl;
	 DestroyQueue_L(myqueue);              // ��������
   }
