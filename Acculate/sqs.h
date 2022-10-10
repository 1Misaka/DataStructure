#define MaxSize 100

typedef struct {
	int data[MaxSize];
	int top;
}Stack;

void InitStack(Stack& st) {
	st.top = -1;
}

void Push(Stack& st, int x) {
	++st.top;
	st.data[st.top] = x;
}

void Pop(Stack& st, int& x) {
	x = st.data[st.top];
	--st.top;
}

int run(int a, char c, int b) {
	if (c == '+')  return a + b;
	if (c == '-')  return a - b;
	if (c == '*')  return a * b;
	if (c == '/')  return a / b;

}

