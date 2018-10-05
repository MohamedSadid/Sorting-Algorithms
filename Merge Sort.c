void merge(int *leftArr, int *rightArr, int *pA, int len) {
    int leftLen = (len / 2);
    int rightLen = (len - leftLen);

    int i = 0, j = 0, k = 0;
    while((i < leftLen) && (j < rightLen)) {
        if (leftArr[i] <= rightArr[j]) {
            pA[k] = leftArr[i];
            i++;
        } else {
            pA[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < leftLen) {
        pA[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightLen) {
        pA[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int *pA, int len) {

    if (len < 2) return 1;

    int mid = len / 2;
    int *leftArr = (int *)malloc(mid * sizeof(int));
    int *rightArr = (int *)malloc((len - mid) * sizeof(int));

    int i;
    for (i = 0; i < mid; i++) {
        leftArr[i] = pA[i];
    }
    for (i = mid; i < len; i++) {
        rightArr[i - mid] = pA[i];
    }

    mergeSort(leftArr, mid);
    mergeSort(rightArr, (len - mid));
    merge(leftArr, rightArr, pA, len);

}
int main()
{
    int arr[] = {2, 5, 10, 3, 1, 4, 9, 6, 8, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, len);

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}