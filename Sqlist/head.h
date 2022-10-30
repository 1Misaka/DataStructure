#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
typedef struct { //��̬����
	int data[MaxSize];
	int length;
} Sqlist;

void Init(Sqlist& L) {//��ʼ��
	L.length = 0;
	for (int i = 0; i < MaxSize; ++i) {
		L.data[i] = 0;
	}
}

bool Insert(Sqlist& L, int i, int elem) {//��i��λ�ò���elemԪ��
	if (i<1 || i>L.length + 1)

		return false;

	if (i > MaxSize)

		return false;

	for (int j = L.length; j >= i; --j) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = elem;
	++L.length;
	return true;
}
bool Delete(Sqlist& L, int i) {//ɾ��Ԫ��
	if (i<1 || i>L.length)
		return false;

	for (int j = i - 1; j < L.length; ++j)
	{
		L.data[j] = L.data[j + 1];
	}
	--L.length;
	return true;
}
int search(Sqlist L, int i) {//����Ԫ��
	int elem;
	if (i<1 || i>L.length + 1) {
		return false;
	}
	elem = L.data[i - 1];
	return elem;
}