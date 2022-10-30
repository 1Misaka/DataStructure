#define _CRT_SECURE_NO_WARNINGS
#include"head.h"

int del_min(Sqlist &L) {
	int tmp1 = L.data[0];
	int tmp2 = 0;
	for (int i = 1; i < L.length; i++)
	{
		if (tmp1 > L.data[i]) {
			tmp1 = L.data[i];
			tmp2 = i;
		}
	}
	int tmp = L.data[tmp2];
	L.data[tmp2] = L.data[L.length - 1];
	L.data[L.length - 1] = 0;

	return tmp;
}
int main() {//主函数
	Sqlist L;
	Init(L);
	int tmp[] = {13, 9, 3, 4, 5, 1, 7, 8 };
	int n = sizeof(tmp) / sizeof(int);
	for (int i = 0; i < n; ++i) { //赋值操作
		L.data[i] = tmp[i];
		++L.length; //当前长度
	}
	printf("%d",del_min(L));
	return 0;
}


