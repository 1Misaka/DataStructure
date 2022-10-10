#include<stdio.h>

void directRange(int &arr[], int n) {
	for (int i = 2; i < n; ++i)
	{
		if (arr[i]< arr[i-1]) {
			arr[0] = arr[i];
			for (int j = i-1; a[0]<a[j]; --j)
			
				a[j + 1] = a[j];
			
			a[j + 1] = a[0];
		}
	}
}
int main() {
	int arr[] = { -1,50,26,38,80,70,90,8,30,40,20 };
	int n = sizeof(arr) / sizeof(int);
	
	
	
}