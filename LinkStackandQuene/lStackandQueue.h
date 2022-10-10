#include<stdio.h>
#include<stdlib.h>
//链栈
typedef struct lStack {
	int data;
	struct lStack* next;
}lStack, * LinkStack;
void InitStack(LinkStack& st) {
	st = (lStack*)malloc(sizeof(lStack));
	st->next = NULL;
}
void Into(LinkStack&st,int x ) {//入栈
	lStack* s = (lStack*)malloc(sizeof(lStack));
	s->data = x;
	s->next = st->next;
	st->next = s;
}
bool Out(LinkStack st) {
	if (st->next == NULL)
		return false;
	lStack* t;
	t = st->next;
	st->next = t->next;
	free(t);
}
void PrintStack(LinkStack st) {
	lStack* r;
	r = st->next;
	while (r!=NULL)
	{
		printf("%d ", r->data);
		r = r->next;
	}
	printf("\n");
}


//链队
typedef struct  QNode{   //定义链队结点：链队结点采用了单链表
	int data;
	struct QNode* next;
}QNode;

typedef struct {    //定义链队指针
	QNode* front;
	QNode* end;
}LinkQueue;


void InitQueue(LinkQueue& qu) {
	qu.front = qu.end = NULL;
}
