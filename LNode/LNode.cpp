#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode* next ;
}LNode,*LinkList;//LNode�������㣬LinkList����������

//��ͷ�������
void Init(LinkList& L) {//��ʼ��
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
}
void Insert(LinkList& L, int i, int elem) {
	LNode* p;
	p = L;
	int j = 0;//��ǰָ��p��λ��
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