#include <stdio.h>
int jumlah_bilangan(int a)
{
    int jumlah = 0;
    for (int i = 1; i <= a; i++)
    {
        jumlah += i;
    }
    return jumlah;
}
int main()
{
    int a;
    printf("Masukkan nilai integer lebih besar dari 10: ");
    scanf("%d", &a);
    if (a < 10)
    {
        printf("Jumlah bilangan kurang dari 10");
    }
    else
    {
        int total = jumlah_bilangan(a);
        printf("Jumlah dari 1 hingga %d adalah %d\n", a, total);
    }
    return 0;
}
