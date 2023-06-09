#include <stdio.h>

int main (){
    int bil_1,bil_2,bil_3;
    float mean;

printf("Menghitung rata-rata 3 bilangan \n");

printf("Masukkan bilangan pertama: \n");
scanf("%d", &bil_1);

printf("Masukkan bilangan kedua: \n");
scanf("%d", &bil_2);

printf("Masukkan bilangan ketiga: \n");
scanf("%d", &bil_3);

mean = ((float)bil_1 + (float)bil_2 + (float)bil_3)/3;

printf("Rata-ratanya: %.2f ", mean);
}