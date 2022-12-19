#include<stdio.h>
#include<stdlib.h>


//QuickSort
//int Partition(int arr[], int low, int high) {
//	int pivot = arr[low];
//	while (low < high) {
//		while (arr[high] > pivot && low < high) { --high; }
//		arr[low] = arr[high];
//		while (arr[low] < pivot && low < high) { ++low; }
//		arr[high] = arr[low];
//	}
//	arr[low] = pivot;
//	return low;
//}
//
//void QuickSort(int arr[], int low, int high) {
//	if (low < high) {
//		int pivotpos = Partition(arr, low, high);
//		QuickSort(arr, low, pivotpos - 1);
//		QuickSort(arr, pivotpos + 1, high);
//	}
//}

void merge(int arr[], int start1, int end1, int start2, int end2) {
	int n = end2 - start1 + 1;
	int* B;
	B = (int*)malloc(n*sizeof(int));
	int i = start1, j = start2, k = 0;
	for (i, j, k; i <= end1 && j <= end2;) {
		if (arr[i] <= arr[j]) { B[k] = arr[i]; ++i, ++k; }
		if (arr[i] > arr[j]) { B[k] = arr[j]; ++j, ++k; }
	}
	if (i <= end1) { B[k] = arr[i]; ++i, ++k; }
	if (j <= end2) { B[k] = arr[j]; ++j, ++k; }
	for (int i = start1, j = 0; i <= end2; ++i, ++j) {
		arr[i] = B[j];
	}
}

void MergeSort(int arr[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);
		merge(arr, low, mid, mid + 1, high);
	}
}
int main() {
	int arr[] = { 21,32,43,98,54,45,23,4,66,86 };
	int n = sizeof(arr) / sizeof(int);
	//QuickSort(arr, 0, n - 1);
	MergeSort(arr, 0, n - 1);
	return 0;
}