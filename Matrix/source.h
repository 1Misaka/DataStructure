#define Maxsize 10

//Ques1
// 
//typedef struct {
//	int unzero;
//}check;
//void Init(check& ch) {
//	ch.unzero = 0;
//}
//
//void findzero(int a[Maxsize], check& ch) {
//	while (a[ch.unzero]!=0 && a[ch.unzero+1] != 0)
//	{
//		++ch.unzero;
//	}
//}
//
//int findmax(int a[Maxsize]) {
//	if (Maxsize==1)
//	{
//		return a[0];
//	}
//	for (int i = 0; i < Maxsize-1; ++i)
//	{
//		if (a[i]>a[Maxsize])
//		{
//			findmax(a);
//		}
//	}
//}



//Ques2(1)
//int findmax(int a[Maxsize],int i) {
//	if (i == Maxsize-1)
//	{
//		return a[i];
//	}
//
//	if (a[i]>findmax(a,i+1))
//	{
//		
//		return a[i];
//	}
//	else {
//		return findmax(a, i + 1);
//	}
//}



//Ques2(2)
//void sum(int a[Maxsize],int i) {
//	if (i<Maxsize)
//	{
//		a[0] = a[0] + a[i];
//		++i;
//		sum(a, i);
//	}
//}

//Ques3
void move2left(int a[Maxsize], int source, int dest) {
	int tmp=a[source];
	for ( int i = source; i >dest; --i)
	{
		a[source] = a[source - 1];
	}
	a[dest] = tmp;
}
void arrange(int a[Maxsize],int &arrow) {
	
	while (1)
	{
		if (a[arrow] % 2 != 0 && a[arrow + 1] % 2 != 0) {
			++arrow;
		}
		else
		{
			break;
		}
	}
	for (int i=arrow; i < Maxsize; ++i)
	{
		if (a[i]%2 != 0)
		{
			move2left(a, i, arrow);
			++arrow;
		}
	}


}

