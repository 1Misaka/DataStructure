#include<stdio.h>
#include"sqs.h"
int main() {
	
	Stack st;
	InitStack(st);
	int a, b;
	char str[] = { '9','3','+','8','6','+','*','\0' };//(9+3)*(8+6)==93+86+*
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= '0' && str[i] <= '9') {
			Push(st, str[i] - '0');
		}
		else
		{
			Pop(st, b);
			Pop(st, a);
			Push(st, run(a, str[i], b));
		}
	}
	printf("The count is %d.\n ", st.data[st.top]);
}