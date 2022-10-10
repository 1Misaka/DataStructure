#include<stdio.h>
#include<Windows.h>

void rightmove(int arr[], int start, int end) {
	for (int i = end; i > start; --i)
	{
		arr[i] = arr[i - 1];
	}
}


void zheban(int arr[], int n) {
	int low, high, mid,i;
	
	for (i = 2; i < n; ++i)
	{
		if (arr[i] < arr[i - 1]) {
			arr[0] = arr[i];
			low = 1, high = i - 1; mid = (low + high) / 2;
			while (low <= high) {
				if (arr[0] >= arr[mid]) {
					low = mid + 1;
					mid = (low + high) / 2;
				}
				else if (arr[0] < arr[mid]) {
					high = mid - 1;
					mid = (low + high) / 2;
				}
			}
			rightmove(arr, low, i);
			arr[low] = arr[0];
		}
	}
	arr[0] = -1;
}


int main() {
	int arr[] = { -1,50,26,38,80,70,90,8,30,40,20 };
	int n = sizeof(arr) / sizeof(int);
	zheban(arr, n);
	return 0;
}