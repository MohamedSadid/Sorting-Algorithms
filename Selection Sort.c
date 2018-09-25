#include <stdio.h>
#include <string.h>

void selectionSort(int *arr, int len);
void swap(int *num1, int *num2);

int main() {

    int arr[] = {4, 6, 23, 1, 8, 23, 2, 5};
    int len = (sizeof(arr) / sizeof(arr[0]));

    selectionSort(arr, len);

    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }


    return 0;

}

void swap(int *num1, int *num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selectionSort(int *arr, int len) {
    int i, j, minIndex;
    for (i = 0; i < len - 1; i++) {
        minIndex = i;
        for (j = (i + 1); j < len; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

