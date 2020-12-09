#include <stdio.h>
#include <stdlib.h>
#define ERROR 0
#define OK 1
#define OVERFLOW 0

typedef int qelemType;

typedef struct queue
{
	qelemType data;
	struct queue *next;
}queue,*linkqueue;
typedef struct
{
	linkqueue rear;
	int length;
}sqqueue;

void initQueue(sqqueue &queue)//�ÿն���
{
	queue.rear=(linkqueue)malloc(sizeof(queue));
	queue.rear->next=queue.rear;
}

int emptyQueue(sqqueue &queue)//�ж����Ƿ�Ϊ��
{
	if(queue.rear->next==queue.rear)
		return OK;
	else
		return 0;
}

int enqueue(sqqueue &queue,qelemType e)
{
	linkqueue p;
	p=(linkqueue)malloc(sizeof(queue));
	if(!p)
		return OVERFLOW;
	p->data=e;
	p->next=queue.rear->next;
	queue.rear->next=p;
	queue.rear=p;
	return OK;
}

int delqueue(sqqueue &queue,qelemType &e)
{
	linkqueue p;
	if(queue.rear->next==queue.rear)
		return ERROR;//������Ϊ�շ���0
	p=queue.rear->next->next;//ѭ��������ж�βָ����һ���(Ҳ��ͷ���)����һ���(����ͷָ��)
	e=p->data;
	queue.rear->next->next=p->next;
	free(p);
	//delete(p);//free������delete��������ʹ��
	return OK;
}

int main()
{
	sqqueue queue2;
	qelemType num;
	initQueue(queue2);
	if(emptyQueue(queue2))
		printf("�ö���ĿǰΪ��!\n");
	else
		printf("�ö��в�Ϊ��!\n");
	for(int i=1;i<=10;i++)
		if(enqueue(queue2,i))
			printf("Ԫ��%d�ɹ�����!\n",i);
	printf("\n\n");
	for(int j=1;j<=9;j++)
		if(delqueue(queue2,num))
			printf("Ԫ��%d�ɹ�����!\n",num);
	if(emptyQueue(queue2))
		printf("�ö���ĿǰΪ��!\n");
	else
		printf("�ö��в�Ϊ��!\n");
	return 0;
}
