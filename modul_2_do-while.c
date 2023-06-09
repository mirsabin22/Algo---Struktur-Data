#include <stdio.h>

int main (){

    int n, i = 1, sum = 0;
    //menggunakan do-While
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

     do {
        sum += i;
        i++;
    } while (i <= n);


    printf("Jumlah deret bilangan dari 1 hingga %d adalah %d", n, sum);

    return 0;

}