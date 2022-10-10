#include<stdio.h>
#include"source.h"
int main() {
	int a[Maxsize] = { 2,4,6,8,10,1,3,5,7,9 };


	//Ques1
	/*check ch;
	Init(ch);
	findzero(a, ch);
	for (int i = ch.unzero+1; i < Maxsize; ++i)
	{
		if (a[i]!=0)
		{
			++ch.unzero;
			a[ch.unzero] = a[i];
			a[i] = 0;
		}
	}
	for (int i = 0; i < Maxsize; ++i)
	{
		printf("%d ", a[i]);
	}*/





	//Ques2(1)
	/*int i = 0;
	printf("%d\n", findmax(a, i));*/





	//Ques2(2)
	/*int i = 1;
	sum(a, i);
	printf("%d\n", a[0]);*/


	//Ques2(3)  //µ÷ÓÃQues2(2)
	/*int i = 1;
	sum(a, i);
	printf("%d\n", a[0] / Maxsize);*/


	//Ques3
	int i = 0;
	arrange(a,i);
	printf("%d\n", i);
	for (int i = 0; i < Maxsize; i++)
	{
		printf("%d ", a[i]);
	}
	
}