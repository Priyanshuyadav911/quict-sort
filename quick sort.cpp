#include<stdio.h>
 //Function to swap two element without using pointers
 
void swap(int arr[],int i,int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
//Function to partition the array
int partition(int arr[],int low,int high){
	int pivot = arr[high]; //pivot element
	int i = low -1; //Index of the smaller element
	
	for (int j = low; j<high;j++){
		if(arr[j]<= pivot){
			i++;
			swap(arr,i,j); //Swap element
		}
	}
	swap(arr,i + 1,high); //place pivot in he correct position
	return i + 1; //Return pivot index
}
//Function to perform Quick sort
void quickSort(int arr[],int low, int high){
	if (low < high){
		int pi = partition(arr,low,high); //partition index
		
		// Recursively sort element befor and after partition
		quickSort(arr,low,pi -1);
		quickSort(arr,pi +1, high);
	}
}
//Function to print the array
void printArray(int arr[],int n){
	for (int i = 0; i< n; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[] = {10,7,8,9,1,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Originala array: \n");
	printArray(arr,n);
	
	quickSort(arr,0,n-1);
	
	printf("Sorted array : \n");
	printArray(arr,n);
	return 0;
	
	
}
