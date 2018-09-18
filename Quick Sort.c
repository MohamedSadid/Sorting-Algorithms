#include <stdio.h>
#include <string.h>

int partition(int *Arr, int start, int end);
void swap(int* num1, int* num2);
void quickSort(int *arr, int start, int end);

int main(void) {
    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    quickSort(arr, 0, 7);
    int i;
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
}

void swap(int* num1, int* num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int *arr, int start, int end) {
    int pivot = arr[end];
    int pIndex = start;
    int i;
    for (i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            swap(&arr[i], &arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[end], &arr[pIndex]);
    return pIndex;
}


void quickSort(int *arr, int start, int end) {
    int pIndex;
    if (start < end) {
        pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
}
