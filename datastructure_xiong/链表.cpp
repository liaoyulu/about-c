/*用c语言链bai表编写一个学du生信息系统程序，zhidao要求输出学生的学号，姓名，性别，

学号,姓名,成绩.(实现添加,删除,查询,排序,平均)*/

#include <stdio.h>

#include <iostream>

#include <string.h>

#include <stdlib.h>
using namespace std;

const int n=5;

/*

* nodeEntry : 节点数据类型

* nodeADT? ?: 节点结构

* linkADT? ?: 链表结构

*/

typedef struct Student

{

int num;

char name[30];

char sex;

float score1;//语文

float score2;//数学

float score3;//英语

//struct Student *next;

}Student;

typedef struct nodeCDT {

Student entry;

struct nodeCDT *next;

}*nodeADT;

typedef struct linkCDT {

nodeADT head;

}*linkADT;

/*

* InitLink? ?: 初始化链表

* CreateNode : 创建节点

* AppendLink : 添加数据

*/

void InitLink(linkADT *link) {

*link=(linkADT)malloc(sizeof*(*link));

(*link)->head=0;

}

nodeADT CreateNode(Student entry) {

nodeADT p=(nodeADT)malloc(sizeof*p);

p->entry=entry,p->next=0;

return p;

}

void AppendLink(linkADT *link,Student entry) {

nodeADT newNode=CreateNode(entry),p;

if (!*link) InitLink(link);

if (!(*link)->head) (*link)->head=newNode;

else {

for (p=(*link)->head;p->next;p=p->next);

p->next=newNode;

}

}

/*

* SortLink : 排序链表

* -------------------

* 通过移动每个节点的指针来完成排序

*/

//按学号排序

void SortLinkID(linkADT link) {

nodeADT pHead,pRear,p,tp;

if (!link) return;

for (pHead=link->head,pRear=0;pHead;pHead=pHead->next) {

for (tp=pHead,p=pHead->next;p;tp=p,p=p->next)
if (pHead->entry.num>=p->entry.num)

tp->next=p->next,p->next=pHead,pHead=p,p=tp;

if (!pRear) link->head=pHead;

else pRear->next=pHead;

pRear=pHead;

}

}

//按语文成绩排序

void SortLinkChinese(linkADT link) {

nodeADT pHead,pRear,p,tp;

if (!link) return;

for (pHead=link->head,pRear=0;pHead;pHead=pHead->next) {

for (tp=pHead,p=pHead->next;p;tp=p,p=p->next)

if (pHead->entry.score1>=p->entry.score1)

tp->next=p->next,p->next=pHead,pHead=p,p=tp;

if (!pRear) link->head=pHead;

else pRear->next=pHead;

pRear=pHead;

}

}

//按数学成绩排序

void SortLinkMath(linkADT link) {

nodeADT pHead,pRear,p,tp;

if (!link) return;

for (pHead=link->head,pRear=0;pHead;pHead=pHead->next) {

for (tp=pHead,p=pHead->next;p;tp=p,p=p->next)

if (pHead->entry.score2>=p->entry.score2)

tp->next=p->next,p->next=pHead,pHead=p,p=tp;

if (!pRear) link->head=pHead;

else pRear->next=pHead;

pRear=pHead;

}

}

//按英语成绩排序

void SortLinkEnglish(linkADT link) {

nodeADT pHead,pRear,p,tp;

if (!link) return;

for (pHead=link->head,pRear=0;pHead;pHead=pHead->next) {

for (tp=pHead,p=pHead->next;p;tp=p,p=p->next)?

if (pHead->entry.score3>=p->entry.score3)

tp->next=p->next,p->next=pHead,pHead=p,p=tp;

if (!pRear) link->head=pHead;

else pRear->next=pHead;

pRear=pHead;

}

}

//按姓名的字典序进行排序

void SortLinkName(linkADT link) {

nodeADT pHead,pRear,p,tp;

if (!link) return;

for (pHead=link->head,pRear=0;pHead;pHead=pHead->next) {

for (tp=pHead,p=pHead->next;p;tp=p,p=p->next)?

if (pHead->entry.name[0]>=p->entry.name[0])

tp->next=p->next,p->next=pHead,pHead=p,p=tp;

if (!pRear) link->head=pHead;

else pRear->next=pHead;

pRear=pHead;

}

}

//按姓名的长度进行排序

void SortLinkNameLength(linkADT link) {

nodeADT pHead,pRear,p,tp;

if (!link) return;

for (pHead=link->head,pRear=0;pHead;pHead=pHead->next) {

for (tp=pHead,p=pHead->next;p;tp=p,p=p->next)?

if (strlen(pHead->entry.name)>=strlen(p->entry.name))

tp->next=p->next,p->next=pHead,pHead=p,p=tp;

if (!pRear) link->head=pHead;

else pRear->next=pHead;

pRear=pHead;

}

}

// PrintLink : 打印链表

void PrintLink(linkADT link) {

nodeADT p=link->head;

cout<<"学号"<<"? "<<"姓名"<<"\t"<<"性别"<<"\t"

<<"语文"<<"\t"<<"数学"<<"\t"<<"英语"<<endl;

for (;p;p!=NULL,p=p->next){

cout<<p->entry.num<<"? "<<p->entry.name<<"\t"<<p->entry.sex<<"\t"

<<p->entry.score1<<"\t"<<p->entry.score2<<"\t"<<p->entry.score3<<endl;

}

printf("\n");

}

/* 测试 */

int main() {

linkADT link=0;

Student stu[n]={{1002,"Gao Min",'M',80,80,80},{1008,"Wen LR",'M',79,80,70},

{1000,"Wan Huang",'F',72,94,87},{1006,"Zhang Xin",'F',90,90,90},

{1001,"Liu qing",'M',89,90,92}};

int i;

for (i=0;i<n;AppendLink(&link,*(stu+i++)));

cout<<"请选择："<<endl;

cout<<"1、按照学号升序排序"<<endl;

cout<<"2、按照姓名字符长度升序排序"<<endl;

cout<<"3、按照姓名字典序升序排序"<<endl;

cout<<"4、按照语文成绩升序排序"<<endl;

cout<<"5、按照数学成绩升序排序"<<endl;

cout<<"6、按照英语升序排序"<<endl;

//cout<<"7、未排序数据"<<endl;

cout<<"0、退出"<<endl;

//cout<<"未排序数据："<<endl;

//PrintLink(link);

int n;

while(~scanf("%d",&n)){

if(n==0) break;

else if(n==1){

cout<<"按照学号升序排序:"<<endl;

SortLinkID(link);

PrintLink(link);

}

else if(n==2){

cout<<"按照姓名字符长度升序排序:"<<endl;

SortLinkNameLength(link);

PrintLink(link);

}

else if(n==3){

cout<<"按照姓名字典序升序排序:"<<endl;

SortLinkName(link);

PrintLink(link);

}

else if(n==4){

cout<<"按照语文成绩升序排序:"<<endl;

SortLinkChinese(link);

PrintLink(link);

}

else if(n==5){

cout<<"按照数学成绩升序排序:"<<endl;

SortLinkMath(link);

PrintLink(link);

}

else if(n==6){

cout<<"按照英语升序排序:"<<endl;

SortLinkEnglish(link);

PrintLink(link);

}

else cout<<"输入错误,请重新输入！"<<endl;

}

return 0;

}
