#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int B[],int low,int mid,int high){
	int i,j;
	int k=low;
	for(i=low,j=mid+1;i<=mid&&j<=high;++k){
		if(B[i]>=B[j]){
			arr[k]=B[j];
			++j;
		}else{
			arr[k]=B[i];
			++i;
		}
	}

	while(i<=mid){
		arr[k]=B[i];
		++i,++k;
}
	while(j<=high){
		arr[k]=B[j];
		++j,++k;
}
}
void MergeSort(int arr[],int B[],int low,int high){
	if(low<high){
		int mid = (low + high)/2;
		MergeSort(arr,B,low,mid);
		MergeSort(arr,B,mid+1,high);
		merge(arr,B,low,mid,high);
	}
}
void  mSort(int arr[],int n){
	int *B;
	B=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;++i){
		B[i]=arr[i];
	}

	MergeSort(arr,B,0,n-1);
}

int main(){
	int arr[]={1,9,2,8,3,7,4,6,5};
	int n= sizeof(arr)/sizeof(int);
	mSort(arr,n);
	return 0;
}