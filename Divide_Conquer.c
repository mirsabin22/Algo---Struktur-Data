#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Basis jika elemen tidak ditemukan
    }
    
    int mid = (low + high) / 2;
    
    if (arr[mid] == target) {
        return mid; // Basis jika elemen ditemukan
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target); // Rekursi ke setengah kiri
    } else {
        return binarySearch(arr, mid + 1, high, target); // Rekursi ke setengah kanan
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    
    return 0;
}
