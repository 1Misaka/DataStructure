//����Ŀʵ��˳���Ķ�̬����
#include<stdio.h>
#include<stdlib.h>
#define InitSize 10
typedef struct {
	int* data;
	int MaxSize;
	int length;
}DySqlist;
void Init(DySqlist& L) {//��ʼ��˳���
	L.data = (int*)malloc(sizeof(int)*InitSize);
	L.length = 0;
	L.MaxSize = InitSize;
	for (int i = 0; i < L.MaxSize; ++i)//��data����ֵ����Ϊ0
	{
		L.data[i] = 0;
	}
}
bool Increase(DySqlist& L, int i) { //���Ӳ���
	if (i<1||i>L.MaxSize)
	if ((L.length+i)>L.MaxSize)
	{
		return false;
	}
	int* tmp=L.data;
	L.data = (int*)malloc(sizeof(int) * (L.MaxSize + i));
	for (int i = 0; i < L.length; ++i)
	{
		L.data[i] = tmp[i];
	}
	L.MaxSize = L.MaxSize + i;
	free(tmp);
}
int checkbit(DySqlist L, int i) {//��λ����
	if (i<1||i>L.length)
	{
		return false;
	}
	int elem;
	elem = L.data[i - 1];
	return elem;
}
int checknum(DySqlist L,  int num) {
	for (int i = 0; i < L.length; ++i)
	{
		if (num == L.data[i]) 
			return i + 1;
	}
	return 0;//int����Ҫ����ֵ��Ĭ��Ϊ0
}
int main() {//������
	DySqlist L;
	Init(L);
	int tmp[] = { 1,3,5,7,9,11,13,15};
	for (int i = 0; i < 8; ++i)//��ֵ����
	{
		L.data[i] = tmp[i];
		++L.length;
	}
	//for (int i = 0; i < L.length; i++)//���Ӳ���
	//{
	//	printf("%d ", L.data[i]);//����ǰ	
	//}
	//printf("\n");
	//printf("%d\n", L.MaxSize);
	//Increase(L,5);
	//for (int i = 0; i < L.length; i++)
	//{
	//	printf("%d ", L.data[i]);//���Ӻ�	
	//}
	//printf("\n");
	//printf("%d\n", L.MaxSize);

	//printf("%d\n",checkbit(L, 1));
	printf("%d\n",checknum(L, 16));
}