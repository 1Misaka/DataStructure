#include<stdio.h>
void swap(int& a, int& b) {
	int tmp;
	tmp = b;
	b = a;
	a = tmp;
}
void maopao(int arr[], int n) {
	bool bol;
	for (int i = 0; i < n; ++i)
	{
		bol = false;
		for (int j = n-1; j > i; --j)
		{
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
				bol = true;
			}

		}
		if (bol == false)
		{
			break;
		}
	}
}

int main() {
	int arr[] = { 50,26,38,80,70,90,8,30,40,20 };
	int n = sizeof(arr) / sizeof(int);
	maopao(arr, n);
	return 0;
}