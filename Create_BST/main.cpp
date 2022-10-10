#include<stdio.h>
#include"myhead.h"
int main(int argc, char* argv[]) {
	int array[] = { 2,3,8,10,11,7,20,9,15 };
	BSTree T;
	Create(T);
	T->data = array[0];
	int i = 1;
	BSNode* p;
	p = T;
	while (i<9)
	{
		if ((p->data<array[i])&&p->rchild==NULL)
		{
			Create(p->rchild);
			p = p->rchild;
			p->data = array[i];
			++i;
		}
		else
		{
			p = p->rchild;
		}
		if ((p->data > array[i]) && p->lchild == NULL)
		{
			Create(p->lchild);
			p = p->lchild;
			p->data = array[i];
			++i;
		}
		else {
			p = p->lchild;
		}
	}
}