#include <stdio.h>

int main() {
    int arr[12]; 

    printf("Masukkan 6 angka:\n");
    for (int i = 0; i < 6; i++) {
        int input;
        scanf("%d", &input);
        arr[i*2] = input;
    }

    for (int i = 1; i < 12; i += 2) {
        arr[i] = 0;
    }

    printf("Isi array:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }

 return 0;
}