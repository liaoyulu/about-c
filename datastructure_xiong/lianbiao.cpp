#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  N 10
typedef struct student{
	int num;
	char name[30];
	int age;
	float score;
	struct student *next;
}LNode, LinkList; 
   
LinkList *create(int n) {
	LinkList *head, *node, *end;
	head = (LinkList*)malloc(sizeof(LinkList));
	end = head;
	for(int i = 0; i < n; i++) {
		node=(LinkList*)malloc(sizeof(LinkList));
		printf("请输入%d个学生信息\n",i+1);
		scanf("%d %s %d %f",&node->num,node->name,&node->age,&node->score);
		end->next = node;
		end = node;
	}
	end->next=NULL;
	return head;
}

int main(){
	int n;
	float sum=0;
	scanf("%d",&n);
	LinkList *h;
	h=create(n);
	while (h->next != NULL) {
		
        h = h->next;
        sum += h->score;
        printf("%d %s %d %.2f\n", h->num,h->name,h->age,h->score);
		}
	printf("平均分%.2f",sum/n);
}


