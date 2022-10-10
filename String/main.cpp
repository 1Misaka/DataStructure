#include<stdio.h>
#include"header.h"
int main() {
	char str[] = "HelloWorld123456789";
	String T,Sub;
	InitString(T);
	InitString(Sub);
	int pos, length;
	pos = 12;
	length = 5;
	for (int i = 0; i < 20; ++i)
	{
		Into(T, str[i]);
	}

	SubString(Sub, T, pos, length);//创建子串
	//Sub.ch[3] = 'c';
									
//查找子串
	for (int i = 1; i <= T.length; ++i)
	{
		if (T.ch[i] == Sub.ch[1]) {
			if (FindSub(T, Sub, i) != 0) {
				printf("%d\n",FindSub(T, Sub, i));
				break;
			}
		}
	}

}