#include "lStackandQueue.h"

int main() {
	LinkQueue qu;
	InitQueue(qu);
	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; ++i)
	{
		QNode* s;
		s = (QNode*)malloc(sizeof(QNode));
		s->data = a[i];
		if (i==0)
		{
			qu.front = qu.end = s;
		}
		qu.end->next = s;
		qu.end = qu.end->next;
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", qu.front->data);
		qu.front = qu.front->next;
	}
}