#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    node *next;
}node,*LinkList;


//创建不带头结点的单链表
node* createLinklist(node *phead)
{
    printf("输入节点信息(-1时结束):\n");
    node *ptail;
    int x;
    phead = (node*)malloc(sizeof(node));
    phead->next = NULL;
    scanf("%d",&x);
    phead->data = x;
    while(1)
    {
        scanf("%d",&x);
        //data等于-1的时候停止创建节点
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

//在不带头结点的单链表中删除结点
node* deleteLinklist(node *phead,int deleteData)
{
    node *ptail = phead;
    node *q = ptail->next;
    //判断头结点
    if(phead->data == deleteData)
    {
        phead = phead->next;
        ptail->next = NULL;
        return phead;
    }
    //判断剩余结点
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

//在data为data的结点后插入结点pinsert
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
    printf("链表中不存在符合条件的结点，插入失败\n");
    return phead;
}

//输出所有结点信息
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
    //建立链表
    node *phead;
    int deleteData;
    int data;
    phead = createLinklist(phead);

    printf("\n创建之后的节点：");
    
    //输出节点
    printfLinklist(phead);
    printf("\n-------------------------\n");
    
    //删除结点
    printf("删除结点\n");
    scanf("%d",&deleteData);
    phead = deleteLinklist(phead,deleteData);

    //输出节点
    printfLinklist(phead);
    printf("\n-------------------------\n");

        
    //插入结点
    int insertdata;
    printf("插入结点\n");
    printf("输入你要插入的值：");
    scanf("%d",&insertdata);
    node *pinsert = (node*)malloc(sizeof(node));
    pinsert->next = NULL;
    pinsert->data = insertdata;
    printf("请输入该值要插入到哪个结点后面：");
    scanf("%d",&data);
    phead = insertLinklist(phead,pinsert,data);
    //输出节点
    printfLinklist(phead);
    printf("\n-------------------------\n");

    return 0;
}
