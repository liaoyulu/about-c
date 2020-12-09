/*��c������bai���дһ��ѧdu����Ϣϵͳ����zhidaoҪ�����ѧ����ѧ�ţ��������Ա�

ѧ��,����,�ɼ�.(ʵ�����,ɾ��,��ѯ,����,ƽ��)*/

#include <stdio.h>

#include <iostream>

#include <string.h>

#include <stdlib.h>
using namespace std;

const int n=5;

/*

* nodeEntry : �ڵ���������

* nodeADT? ?: �ڵ�ṹ

* linkADT? ?: ����ṹ

*/

typedef struct Student

{

int num;

char name[30];

char sex;

float score1;//����

float score2;//��ѧ

float score3;//Ӣ��

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

* InitLink? ?: ��ʼ������

* CreateNode : �����ڵ�

* AppendLink : �������

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

* SortLink : ��������

* -------------------

* ͨ���ƶ�ÿ���ڵ��ָ�����������

*/

//��ѧ������

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

//�����ĳɼ�����

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

//����ѧ�ɼ�����

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

//��Ӣ��ɼ�����

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

//���������ֵ����������

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

//�������ĳ��Ƚ�������

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

// PrintLink : ��ӡ����

void PrintLink(linkADT link) {

nodeADT p=link->head;

cout<<"ѧ��"<<"? "<<"����"<<"\t"<<"�Ա�"<<"\t"

<<"����"<<"\t"<<"��ѧ"<<"\t"<<"Ӣ��"<<endl;

for (;p;p!=NULL,p=p->next){

cout<<p->entry.num<<"? "<<p->entry.name<<"\t"<<p->entry.sex<<"\t"

<<p->entry.score1<<"\t"<<p->entry.score2<<"\t"<<p->entry.score3<<endl;

}

printf("\n");

}

/* ���� */

int main() {

linkADT link=0;

Student stu[n]={{1002,"Gao Min",'M',80,80,80},{1008,"Wen LR",'M',79,80,70},

{1000,"Wan Huang",'F',72,94,87},{1006,"Zhang Xin",'F',90,90,90},

{1001,"Liu qing",'M',89,90,92}};

int i;

for (i=0;i<n;AppendLink(&link,*(stu+i++)));

cout<<"��ѡ��"<<endl;

cout<<"1������ѧ����������"<<endl;

cout<<"2�����������ַ�������������"<<endl;

cout<<"3�����������ֵ�����������"<<endl;

cout<<"4���������ĳɼ���������"<<endl;

cout<<"5��������ѧ�ɼ���������"<<endl;

cout<<"6������Ӣ����������"<<endl;

//cout<<"7��δ��������"<<endl;

cout<<"0���˳�"<<endl;

//cout<<"δ�������ݣ�"<<endl;

//PrintLink(link);

int n;

while(~scanf("%d",&n)){

if(n==0) break;

else if(n==1){

cout<<"����ѧ����������:"<<endl;

SortLinkID(link);

PrintLink(link);

}

else if(n==2){

cout<<"���������ַ�������������:"<<endl;

SortLinkNameLength(link);

PrintLink(link);

}

else if(n==3){

cout<<"���������ֵ�����������:"<<endl;

SortLinkName(link);

PrintLink(link);

}

else if(n==4){

cout<<"�������ĳɼ���������:"<<endl;

SortLinkChinese(link);

PrintLink(link);

}

else if(n==5){

cout<<"������ѧ�ɼ���������:"<<endl;

SortLinkMath(link);

PrintLink(link);

}

else if(n==6){

cout<<"����Ӣ����������:"<<endl;

SortLinkEnglish(link);

PrintLink(link);

}

else cout<<"�������,���������룡"<<endl;

}

return 0;

}
