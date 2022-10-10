#include<stdio.h>

void directRange(int arr[], int n) {
	int i, j;
	/*for (i = 2; i < n; ++i)
	{
		if (arr[i]< arr[i-1]) {
			arr[0] = arr[i];
			for (j = i-1; arr[0]<arr[j]; --j)
			
				arr[j + 1] = arr[j];
			
			arr[j + 1] = arr[0];
		}
	}*/

	for (i = 2; i < n; ++i)
	{
		if (arr[i] < arr[i - 1]) {
			arr[0] = arr[i];
			for ( j = i-1; arr[j]>arr[0];--j)
			{
				arr[j + 1] = arr[j];
			}
			arr[j+1] = arr[0];
			
		}
	}
	arr[0] = -1;
}
int main() {
	int arr[] = { -1,50,26,38,80,70,90,8,30,40,20 };
	int n = sizeof(arr) / sizeof(int);
	directRange(arr, n);
	
	return 0;
}