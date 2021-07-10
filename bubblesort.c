#include <stdio.h>
void swaptwonumbers(int *x1, int *y1) {
    int temp = *x1;
    *x1 = *y1;
    *y1 = temp;
}
void bubblesort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swaptwonumbers(&arr[j], &arr[j+1]);
}      
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 16, 22, 18, 77, 44, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}


