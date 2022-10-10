#include<stdio.h>
#include<stdlib.h>
#include"myhead.h"
int main() {
	Tree T;
	int i = 0;
	int ch[] = { 1,2,4,-1,-1,-1,3,-1,-1};
	Create(T, ch, i);


	printf("%d\n", getdepth(T));
	//preloop(T);
}