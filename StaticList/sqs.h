#include<stdio.h>
#define MaxSize 10

//Stack
typedef struct {
	int data[MaxSize];
	int top;
}SqStack;
void InitStack(SqStack& st) {
	st.top = -1;
}
bool Push(SqStack& st, int x) {
	if (st.top == MaxSize - 1)
		return false;
	++st.top;
	st.data[st.top] = x;
	return true;
}
bool Pop(SqStack& st, int& x) {
	if (st.top == -1)
		return false;
	x = st.data[st.top];
	--st.top;
}
void PrintStack(SqStack st) {
	printf("The Stack's top is %d\n", st.data[st.top]);
}



//Queue
typedef struct {
	int data[MaxSize];
	int start, end;
}SqQue;
void InitQueue(SqQue& sq) {
	sq.start = 0;
	sq.end = 0;
}
bool Into(SqQue& sq, int x) {
	if ((sq.end + 1 )%MaxSize == sq.start)
		return false;
	sq.data[sq.end] = x;
	sq.end = (sq.end + 1) % MaxSize;
}
bool Out(SqQue& sq) {
	if (sq.start == sq.end)
		return false;
	sq.start = (sq.start + 1) % MaxSize;
}

void PrintArrow(SqQue sq) {
	printf("The start is %d ,end is %d\n", sq.start, sq.end);
}
void PrintQueue(SqQue sq) {
	if (sq.end<sq.start)
	{
		for (int i = sq.start; i < MaxSize; ++i)
		{
			printf("%d ", sq.data[i]);
		}
		for (int i = 0; i < sq.end; ++i)
		{
			printf("%d ", sq.data[i]);

		}
		printf("\n");
	}
	else
	{
		for (int i = sq.start; i < sq.end; ++i)
		{
			printf("%d ", sq.data[i]);
		}
		printf("\n");
	}
}

void Acculength(SqQue sq) {
	int x = 0;
	x = (sq.end - sq.start + MaxSize)%MaxSize;
	printf("The Queue's length is %d\n", x);
}