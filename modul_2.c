#include <stdio.h>

int main (){

    int n, i = 1, sum = 0;
    //menggunakan While
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Jumlah deret bilangan dari 1 hingga %d adalah %d", n, sum);

    return 0;

}