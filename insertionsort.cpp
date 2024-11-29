#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    
    // Start from the second element (index 1)
    for (i = 1; i < n; i++) {
        key = arr[i];  // Store the current element to be inserted
        j = i - 1;
        
        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // Place the key after the last element smaller than it
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}
