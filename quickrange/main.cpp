#include<stdio.h>
int Partition(int arr[], int low, int high) {
	int pivotpos = arr[low];
	while (low<high) {
		while (pivotpos < arr[high] && low < high)
		{
			--high;
		}
		arr[low] = arr[high];

		while (pivotpos > arr[low] && low < high)
		{
			++low;
		}
		arr[high] = arr[low];
	}
	arr[low] = pivotpos;
	return low;
}

int QuickSort(int arr[], int low, int high) {
	if (high <= low)
	{
		return 0;
	}

	int pivot = Partition(arr, low, high);
	QuickSort(arr,pivot+1,high);
	QuickSort(arr, low, pivot - 1);
}

int main(int argc, char* argv[]) {
	int arr[] = { 30,20,50,60,8,70,40,45 };
	QuickSort(arr, 0, 7);
	return 0;
}