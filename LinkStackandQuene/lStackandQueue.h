#include<stdio.h>
#include<stdlib.h>
//��ջ
typedef struct lStack {
	int data;
	struct lStack* next;
}lStack, * LinkStack;
void InitStack(LinkStack& st) {
	st = (lStack*)malloc(sizeof(lStack));
	st->next = NULL;
}
void Into(LinkStack&st,int x ) {//��ջ
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


//����
typedef struct  QNode{   //�������ӽ�㣺���ӽ������˵�����
	int data;
	struct QNode* next;
}QNode;

typedef struct {    //��������ָ��
	QNode* front;
	QNode* end;
}LinkQueue;


void InitQueue(LinkQueue& qu) {
	qu.front = qu.end = NULL;
}
