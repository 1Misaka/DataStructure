//本项目实现顺序表的动态分配
#include<stdio.h>
#include<stdlib.h>
#define InitSize 10
typedef struct {
	int* data;
	int MaxSize;
	int length;
}DySqlist;
void Init(DySqlist& L) {//初始化顺序表
	L.data = (int*)malloc(sizeof(int)*InitSize);
	L.length = 0;
	L.MaxSize = InitSize;
	for (int i = 0; i < L.MaxSize; ++i)//将data区数值重置为0
	{
		L.data[i] = 0;
	}
}
bool Increase(DySqlist& L, int i) { //增加操作
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
int checkbit(DySqlist L, int i) {//按位查找
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
	return 0;//int型需要返回值，默认为0
}
int main() {//主函数
	DySqlist L;
	Init(L);
	int tmp[] = { 1,3,5,7,9,11,13,15};
	for (int i = 0; i < 8; ++i)//赋值操作
	{
		L.data[i] = tmp[i];
		++L.length;
	}
	//for (int i = 0; i < L.length; i++)//增加测试
	//{
	//	printf("%d ", L.data[i]);//增加前	
	//}
	//printf("\n");
	//printf("%d\n", L.MaxSize);
	//Increase(L,5);
	//for (int i = 0; i < L.length; i++)
	//{
	//	printf("%d ", L.data[i]);//增加后	
	//}
	//printf("\n");
	//printf("%d\n", L.MaxSize);

	//printf("%d\n",checkbit(L, 1));
	printf("%d\n",checknum(L, 16));
}