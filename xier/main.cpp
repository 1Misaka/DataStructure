#include<stdio.h>

void rightmove(int arr[], int start, int end,int d) {
	for (int i = end; arr[0]<arr[i-d]&&i>start; i = i - d)
	{
		arr[i] = arr[i - d];
	}
}

void xier(int arr[], int n) {
	int d = n / 2; 
	int i,j;
	while (d>=1)
	{
		for (i = d+1; i <n; i = i + d) {
			if (arr[i] < arr[i - d]) {
				arr[0] = arr[i];

				for (j = i; arr[0]<arr[j - d] && j>1; j = j - d)
				{
					arr[j] = arr[j - d];
				}

				
				arr[j] = arr[0];
			}
		}
		d = d / 2;
	}
	arr[0] = -1;
}


int main() {
	int arr[] = { -1,50,26,38,80,70,90,8,30,40,20 };
	int n = sizeof(arr) / sizeof(int);
	xier(arr, n);
	return 0;
}