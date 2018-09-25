#include <stdio.h>
#include <string.h>

void bubbleSort(int *arr, int len);
int main() {

    int arr[] = {4, 6, 1, 8, 23, 2, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);

    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }


    return 0;

}
void bubbleSort(int *arr, int len) {
    int i, j, temp;
    for (i = 0; i < len; i++) {
        for (j = (i + 1); j < len; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
