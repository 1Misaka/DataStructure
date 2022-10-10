#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10
typedef struct { //静态分配
	int data[MaxSize];
	int length;
} Sqlist;

void Init(Sqlist& L) {//初始化
	L.length = 0;
	for (int i = 0; i < MaxSize; ++i) {
		L.data[i] = 0;
	}
}
 
bool Insert(Sqlist& L, int i, int elem) {//第i个位置插入elem元素
	if (i<1||i>L.length+1)
	
		return false;
	
	if (i>MaxSize)
	
		return false;
	
	for (int j = L.length; j >= i; --j) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = elem;
	++L.length;
	return true;
}
bool Delete(Sqlist& L, int i) {//删除元素
	if (i<1||i>L.length)
		return false;
	
	for (int j = i-1; j < L.length; ++j)
	{
		L.data[j] = L.data[j + 1];
	}
	--L.length;
	return true;
}
int search(Sqlist L,int i) {//查找元素
	int elem;
	if (i<1 || i>L.length+1) {
		return false;
	}
	elem = L.data[i - 1];
	return elem;
}
int main() {//主函数
	Sqlist L;
	Init(L);
	int tmp[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	for (int i = 0; i < 8; ++i) { //赋值操作
		L.data[i] = tmp[i];
		++L.length; //当前长度
	}
	int elem;
	printf("%d\n",search(L, 9));
}


