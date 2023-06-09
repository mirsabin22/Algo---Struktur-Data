#include <stdio.h>

int main()
{
    int A[10] = {87, 65, 65, 78, 91, 100, 100, 79, 95, 88};
    int i, besar, kecil, Jumlah_besar = 0, Jumlah_kecil = 0;

    besar = A[0];
    kecil = A[0];

    for (i = 1; i < 10; i++)
    {
        if (A[i] > besar)
        {
            besar = A[i];
        }
        if (A[i] < kecil)
        {
            kecil = A[i];
        }
    }

    printf("Nilai terbesar: %d\n", besar);
    printf("Nilai terkecil: %d\n", kecil);

    for (i = 0; i < 10; i++)
    {
        if (A[i] == besar)
        {
            Jumlah_besar++;
            printf("Nilai terbesar ditemukan di elemen ke- %d\n", i);
        }
        if (A[i] == kecil)
        {
            Jumlah_kecil++;
        }
    }

    printf("Jumlah mahasiswa yang mendapat nilai terbesar sebanyak %d orang\n", Jumlah_besar);
    printf("Jumlah mahasiswa yang mendapat nilai terkecil sebanyak %d orang\n", Jumlah_kecil);

    int nilai_100 = 0;

    for (i = 0; i < 10; i++)
    {
        if (A[i] == 100)
        {
            nilai_100++;
        }
    }

    if (nilai_100 > 0)
    {
        printf("ADA Yang mendapatkan nilai 100 (GG)\n");
        printf("Jumlah mahasiswa yang mendapat nilai 100 sebanyak %d orang\n", nilai_100);
    }
    else
    {
        printf("TIDAK ADA Yang mendapatkan nilai 100 (NT)\n");
    }

    return 0;
}
