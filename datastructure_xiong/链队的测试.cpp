typedef int ElemType;     // 链队元素类型为int
# include "stdlib.h"      // 该文件包含malloc()、realloc()和free()等函数
# include "iomanip"     // 该文件包含标准输入输出流cout、cin及控制符setw()
# include "LinkQueue.h"   // 该文件包含链队数据对象的描述及相关操作
	
int main()
 {
 LinkQueue myqueue;
  int i,x,a[]={6,8,16,2,34,56,7,10,22,45,62,88};
  InitQueue_L(myqueue);              // 初始化链队
  for(i=0;i<12;i++)
  if(!EnQueue_L(myqueue,a[i]))       // a[i]依次进队
     { cout<<"进队失败！"<<endl;
       return 0;
     }
	if(!GetHead_L(myqueue,x))         // 队首元素并赋值给x
    {  cout<<"取队首元素失败！"<<endl;
       return 0;
     }
	cout<<"当前队首数据元素是："<<x<<endl;
	cout<<"当前链队的长度是："<<QueueLength_L(myqueue)<<endl;
	cout<<"依次出队的数据元素序列为：";
    while(!QueueEmpty_L(myqueue))        // 判队列是否非空
	{   if(!DeQueue_L(myqueue,x))         // 队首元素出队并赋值给x
        {  cout<<"出队失败！"<<endl;
           return 0;
         }
		cout<<x<<' ';
	  }
	 cout<<endl;
	 cout<<"当前链队的长度是："<<QueueLength_L(myqueue)<<endl;
	 cout<<endl;
	 DestroyQueue_L(myqueue);              // 撤销链队
   }
