#include<stdlib.h>
typedef struct BSNode {
	int data;
	struct BSNode* lchild, *rchild;
}BSNode, *BSTree;

void Create(BSTree &T) {
	T = (BSTree)malloc(sizeof(BSNode));
	T->data = 0;
	T->lchild = NULL, T->rchild = NULL;
}

void Insert(BSNode& T, int tmp) {
	T.data = tmp;

}


