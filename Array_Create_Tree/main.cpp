#include<stdio.h>
#include<stdlib.h>
#include"myhead.h"
#define MaxSize 100
//Stack
typedef struct {
	int data[MaxSize];
	int top;
}Stack;
void InitStack(Stack& st) {
	st.top = -1;
}
bool Push(Stack& st, int x) {
	if (st.top == MaxSize - 1)
		return false;
	++st.top;
	st.data[st.top] = x;
	return true;
}
bool Pop(Stack& st, int& x) {
	if (st.top == -1)
		return false;
	x = st.data[st.top];
	--st.top;
}
void PrintStack(Stack st) {
	printf("The Stack's top is %d\n", st.data[st.top]);
}

void visit(Tree T, int x, Stack& S) {
	if (T->lchild == NULL && T->rchild == NULL) {
		Push(S, x * T->data);
	}
}

int degree(Tree T, int x, Stack& S) {
	if (T == NULL) { return 0; }
	x = x + 1;
	visit(T, x, S);
	degree(T->lchild, x, S);
	degree(T->rchild, x, S);
}
int main() {
	Tree T;
	Stack S;
	InitStack(S);
	int i = 0;
	int ch[] = { 1,2,4,7,-1,-1,8,-1,-1,5,-1,-1,3,6,-1,-1,-1};
	Create(T, ch, i);

	degree(T, 0, S);
	
	return 0;
}