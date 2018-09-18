void insertionSort1(int n, int arr_count, int* arr) {
    int value, index;
    for (int i = 1; i < arr_count; i++) {
        value = arr[i];
        index = i;
        while ((index > 0) && (arr[index -1] > value)) {
            arr[index] = arr[index - 1];
            index--;
            for (int j = 0; j < arr_count; j++) {
                printf("%d ", arr[j]);
            }
            printf("\n");
        }
        arr[index] = value;
    }
    for (int j = 0; j < arr_count; j++) {
        printf("%d ", arr[j]);
    }

}