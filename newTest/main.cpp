#include<stdio.h>
#include<stdlib.h>

typedef struct LNode { //define linklist
	int data;
	struct LNode* next;
}LNode,*LinkList;

void Init(LNode *&L) { //initial
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
}
void Insert(LinkList& L, int x) {//insert
	LNode* p;
	LNode* q;
	p = L;
	while (p->next != NULL)
		p = p->next;
	Init(q);
	q->data = x;
	p->next = q;
}

void Del(LinkList& L, LNode* p) {//common del point
	LNode* q;
	q = p->next;
	p->next = q->next;
	free(q);
}

void DelX(LinkList& L, int x) {// del a num
	LNode* p;
	p = L;
	while (p->next !=NULL)
	{
		LNode* q;
		q = p->next;
		if (q->data == x)
		{
			Del(L,p);
		}
		else
		{
			p = p->next;
		}
	}
}
