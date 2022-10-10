#include"sqs.h"

int main() {
	SqQue sq;
	InitQueue(sq);
	for (int i = 0; i < MaxSize-1; ++i)//¸³Öµ
	{
		Into(sq, i);
	}
	Acculength(sq);
	PrintArrow(sq);
	PrintQueue(sq);
	
	Out(sq);
	Out(sq);
	Acculength(sq);
	PrintArrow(sq);
	PrintQueue(sq);

	Into(sq, 100);
	Into(sq, 120);
	Acculength(sq);
	PrintArrow(sq);
	PrintQueue(sq);



}