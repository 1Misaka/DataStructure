#include<stdio.h>
#include<stdlib.h>

void merge(int* arr, int start1, int end1, int start2, int end2) {
	int* B;
	int n = end2 - start1 + 1;
	B = (int*)malloc(n * sizeof(int));
	int i = start1, j = start2, k = 0;
	for (i, j, k; i <= end1 && j <= end2; )
	{
		if (arr[i] <= arr[j]) { B[k] = arr[i]; ++i, ++k; }
		if (arr[i] > arr[j]) { B[k] = arr[j]; ++j, ++k; }
	}
	while (i <= end1) { B[k] = arr[i]; ++i, ++k; }
	while (j <= end2) { B[k] = arr[j]; ++j, ++k; }
	for (int i = start1, j = 0; i <= end2; ++i, ++j) { arr[i] = B[j]; }
	free(B);
}

void MergeSort(int* arr, int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);
		merge(arr, low, mid, mid + 1, high);
	}
}
int main() {
	int arr[] = { 26,37,16,18,39,66,46,15,13,48 };
	int n = sizeof(arr) / sizeof(int);
	MergeSort(arr, 0, n - 1);
	return 0;
}