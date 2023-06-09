#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, index_min, temp;
    for (i = 0; i < n-1; i++) {
        index_min = i;

        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[index_min])
                index_min = j;
        }

        temp = arr[index_min];
        arr[index_min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nArray setelah diurutkan menggunakan Selection Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
