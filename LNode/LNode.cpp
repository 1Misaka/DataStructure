#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode* next ;
}LNode,*LinkList;//LNode代表定义结点，LinkList代表定义链表

//带头结点链表
void Init(LinkList& L) {//初始化
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
}
void Insert(LinkList& L, int i, int elem) {
	LNode* p;
	p = L;
	int j = 0;//当前指针p的位置
	while (p!=NULL&&j<i-1)
	{
		p = p->next;
		++j;
	}
	LNode* s;
	s = (LNode*)malloc(sizeof(LNode));
	s->data = elem;
	s->next = p->next;
	p->next = s;
}
int main() {
	LinkList L;
	Init(L);
	Insert(L, 1, 100);
	Insert(L, 3, 200);
}