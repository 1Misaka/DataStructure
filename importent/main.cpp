#include<stdio.h>
#include<stdlib.h>
#include"myhead.h"

int main() {
	int array[] = { 1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1 };
	Tree T;
	Queue qu;
	initQueue(qu);
	int i = 0;
	Create(T, array, i);

	muticheck(T,qu);
	printQueue(qu);
	//printf("%d\n", qu.end->data);
	//bool tmp = (qu.end->next == NULL);
	//printf("%d\n", tmp);
}