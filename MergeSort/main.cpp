#include<stdio.h>
#include<stdlib.h>


void merge(int arr[], int start1, int end1, int start2, int end2) {
	int l_arr[]={0},r_arr[]={0};
	int n1 = end1 - start1 + 1;
	int n2 = end2 - start2 + 1;
	for (int i = 0; i < n1; ++i)
	{

	}
	int i = start1, j = start2, k = start1;
	while (i <= end1 && j <= end2) 
	{
		if(l_arr[i]<=r_arr[j])
		{
			arr[k] = l_arr[i];
			++i;
			++k;
		}
		else
		{
			arr[k] = r_arr[j];
			++j;
			++k;
		}
	}
	while (i <= end1)
	{
		arr[k] = l_arr[i];
		++i, ++k;
	}
	while (j <= end2)
	{
		arr[k] = r_arr[j];
		++j, ++k;
	}
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