typedef int ElemType;       // ��������Ԫ������Ϊint
# include <stdlib.h>        // ���ļ�����malloc()��realloc()��free()�Ⱥ���
#include <cstdio>
# include <iostream>  
using namespace std;// ���ļ�������׼���������cout��cin�����Ʒ�setw()
#include "iomanip"
# include "LinkList.h"      // ���ļ��а������������ݶ������������ز���



int main()
     {
      LinkList head;
      int i,x,a[]={6,8,16,2,34,56,7,10,22,45};
      InitList_L(head);                       // ��ʼ��������
      for(i=1;i<=10;i++)
        if(!ListInsert_L(head,i,a[i-1]))  // ��a[i]���뵽�������е�i��Ԫ��֮ǰ
        { cout<<"����ʧ�ܣ�"<<endl;
          return 0;
        }
cout<<"ɾ��ǰ�ĵ�����Ϊ��";
    ListTraverse_L(head);                      // ��ʾ�������е�����Ԫ��
      if(!ListDelete_L(head,4,x))                // ɾ����4��Ԫ��
       { cout<<"ɾ��ʧ�ܣ�"<<endl;
         return 0;
       }
cout<<"��ɾ��Ԫ���ǣ�"<<x<<endl;
	  cout<<"ɾ����ĵ�����Ϊ��";
      ListTraverse_L(head);                      // ��ʾ�������е�����Ԫ��
      DestroyList_L(head);                       // ����������
   }
