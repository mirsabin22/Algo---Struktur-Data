#include <stdio.h>
#include <stdlib.h>

void jarak_hari(int a, int b, int c)
{
    int total1, total2, jarak_hari, jarak_bulan, jarak_tahun, selisih;
    total2=31+365*1900;
    total1=a+(30*b)+(365*c);
    selisih=abs(total1-total2);
    jarak_tahun = abs (c - 1900);
    jarak_bulan = abs (b - 1);
    jarak_hari = abs (a - 1);
    printf("Jarak dari %d-%d-%d dengan 01-01-1900 adalah %d hari\n", a, b, c, selisih);
    printf("atau %d hari %d bulan %d tahun", jarak_hari, jarak_bulan, jarak_tahun);
   
}
int main()
{
    int hari, bulan, tahun;
    printf("Masukkan Tanggal (dd:mm:yyyy) : ");
    scanf("%d:%d:%d", &hari, &bulan, &tahun);
    jarak_hari(hari, bulan, tahun);
    return 0;
}

