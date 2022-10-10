#pragma once
/*Tree Define*/
typedef struct TreeNode {//define binary tree node
	int data;
	struct TreeNode* lchild, * rchild;
}TreeNode, * Tree;

void Create(Tree& T, int ch[], int& i) {//数组_先序遍历创建二叉树
	if (ch[i] == -1) {
		T = NULL;
		return;
	}
	T = (Tree)malloc(sizeof(TreeNode));
	T->data = ch[i];
	Create(T->lchild, ch, ++i);
	Create(T->rchild, ch, ++i);
}

/*Queue Define*/
typedef struct QueueNode { // define queue node
	int data;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue {  //define queue
	QueueNode* front;
	QueueNode* end;
}Queue;

void initQueue(Queue& qu) {  //Init Queue
	qu.front = qu.end = NULL;
}

void inQueue(Queue& qu, int x) {
	if (qu.front == NULL && qu.end == NULL)
	{
		QueueNode* s;
		s = (QueueNode*)malloc(sizeof(QueueNode));
		s->data = x;
		qu.end = qu.front = s;
		qu.end->next = NULL;
	}
	else {
		QueueNode* s;
		s = (QueueNode*)malloc(sizeof(QueueNode));
		s->data = x;
		qu.end->next = s;
		qu.end = qu.end->next;
		qu.end->next = NULL;
	}
}
void onQueue(Queue& qu) {  //muti_line_check_tree just need print,so do not set output variable; 
	if (qu.front == qu.end == NULL) {
		printf("The Queue is empty,do not output\n");
	}
	else if (qu.end == qu.front) {
		printf("%d\n", qu.front->data);
		qu.front = qu.end = NULL;
	}
	else
	{
		printf("%d\n", qu.front->data);
		qu.front = qu.front->next;
	}

}

void printQueue(Queue qu) {
	while (qu.front!=NULL)
	{
		printf("%d\n", qu.front->data);
		qu.front = qu.front->next;
	}
}
void muticheck(Tree &T,Queue &qu) {
	if (T == NULL) {
		return;
	}
	inQueue(qu, T->data);
	muticheck(T->lchild,qu);
	muticheck(T->rchild,qu);
}