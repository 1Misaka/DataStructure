#include<stdio.h>
#include<stdlib.h>


void merge(int *arr, int start1, int end1, int start2, int end2) {
	int* B;
	int n = (end2 - start1 + 1);
	int i, j, k;
	B = (int*)malloc(n * sizeof(int));
	for ( i = start1,j=start1,k=start2; j<=end1&& k<= end2; ++i)
	{
		if (arr[j] <= arr[k]) {
			B[i] = arr[j];
			++j;
		}
		else
		{
			B[i] = arr[k];
			++k;
		}
	}
	while (j<=end1)
	{
		B[i] = arr[j];
		++i, ++j;
	}
	while (k <= end2)
	{
		B[i] = arr[k];
		++i, ++k;
	}

	for (int i = start1; i <= end2; ++i)
	{
		arr[i] = B[i];
	}
	//free(B);
}

void MergeSort(int arr[], int low, int high) {
	if(low<high){
		int mid = (low + high)/2;
		MergeSort(arr,low,mid);
		MergeSort(arr,mid+1,high);
		merge(arr,low,mid,mid+1,high);
	}
}

int main(){
	int arr[]={1,9,2,8,3,7,4,6,5};
	int n = sizeof(arr) / sizeof(int);
	MergeSort(arr, 0, n - 1);
	return 0;
}