#include<stdio.h>

void reverse(int* arr, int start, int end) {
	int low = start, high = end;
	while (low<high)
	{
		int tmp = arr[high];
		arr[high] = arr[low];
		arr[low] = tmp;
		++low, --high;
	}
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(arr) / sizeof(int);
	reverse(arr, 0, n - 1);
	reverse(arr, 0, 2);
	reverse(arr, 3, n - 1);
	return 0;
}