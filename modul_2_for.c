#include <stdio.h>

int main() {
    int n, i, sum = 0;
    //menggunakan for
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Jumlah deret bilangan dari 1 hingga %d adalah %d", n, sum);

    return 0;
}


