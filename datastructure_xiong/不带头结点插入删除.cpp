#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    node *next;
}node,*LinkList;


//��������ͷ���ĵ�����
node* createLinklist(node *phead)
{
    printf("����ڵ���Ϣ(-1ʱ����):\n");
    node *ptail;
    int x;
    phead = (node*)malloc(sizeof(node));
    phead->next = NULL;
    scanf("%d",&x);
    phead->data = x;
    while(1)
    {
        scanf("%d",&x);
        //data����-1��ʱ��ֹͣ�����ڵ�
        if(x == -1)
        {
            break;
        }
        ptail = (node*)malloc(sizeof(node));
        ptail->next = phead;
        phead = ptail;
        phead->data = x;
    }
    return phead;
    
}

//�ڲ���ͷ���ĵ�������ɾ�����
node* deleteLinklist(node *phead,int deleteData)
{
    node *ptail = phead;
    node *q = ptail->next;
    //�ж�ͷ���
    if(phead->data == deleteData)
    {
        phead = phead->next;
        ptail->next = NULL;
        return phead;
    }
    //�ж�ʣ����
    while(q)
    {
        if(q->data == deleteData)
        {
            ptail->next = q->next;
            q->next = NULL;
            return phead;
        }
        ptail = ptail->next;
        q = q->next;
    }
    return phead;

}

//��dataΪdata�Ľ��������pinsert
node* insertLinklist(node *phead,node *pinsert,int data)
{
    node *ptail = phead;
    while(ptail)
    {
        if(ptail->data == data)
        {
            pinsert->next = ptail->next;
            ptail->next = pinsert;
            return phead;
        }
        ptail = ptail->next;
    }
    printf("�����в����ڷ��������Ľ�㣬����ʧ��\n");
    return phead;
}

//������н����Ϣ
void printfLinklist(node *phead)
{
    node *p = phead;
    while(p)
    {
        printf("%d  ",p->data);
        p = p->next;
    }
}


int main()
{
    //��������
    node *phead;
    int deleteData;
    int data;
    phead = createLinklist(phead);

    printf("\n����֮��Ľڵ㣺");
    
    //����ڵ�
    printfLinklist(phead);
    printf("\n-------------------------\n");
    
    //ɾ�����
    printf("ɾ�����\n");
    scanf("%d",&deleteData);
    phead = deleteLinklist(phead,deleteData);

    //����ڵ�
    printfLinklist(phead);
    printf("\n-------------------------\n");

        
    //������
    int insertdata;
    printf("������\n");
    printf("������Ҫ�����ֵ��");
    scanf("%d",&insertdata);
    node *pinsert = (node*)malloc(sizeof(node));
    pinsert->next = NULL;
    pinsert->data = insertdata;
    printf("�������ֵҪ���뵽�ĸ������棺");
    scanf("%d",&data);
    phead = insertLinklist(phead,pinsert,data);
    //����ڵ�
    printfLinklist(phead);
    printf("\n-------------------------\n");

    return 0;
}
