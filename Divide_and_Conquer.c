#include <stdio.h>

void penjumlahan(int A[][100], int B[][100], int C[][100], int Baris_Awal, int Kolom_Awal, int Ukuran) {
    if (Ukuran == 1) {
        C[Baris_Awal][Kolom_Awal] = A[Baris_Awal][Kolom_Awal] + B[Baris_Awal][Kolom_Awal];
        return;
    }

    int Ukuran_sub_matriks = Ukuran / 2;
    //atas-kiri
    penjumlahan(A, B, C, Baris_Awal, Kolom_Awal, Ukuran_sub_matriks);
    //atas-kanan
    penjumlahan(A, B, C, Baris_Awal, Kolom_Awal + Ukuran_sub_matriks, Ukuran_sub_matriks);
    //bawah-kiri
    penjumlahan(A, B, C, Baris_Awal + Ukuran_sub_matriks, Kolom_Awal, Ukuran_sub_matriks);
    //bawah-kanan
    penjumlahan(A, B, C, Baris_Awal + Ukuran_sub_matriks, Kolom_Awal + Ukuran_sub_matriks, Ukuran_sub_matriks);
}

int main() {
    int Ukuran;
    printf("Masukkan ukuran matriks: ");
    scanf("%d", &Ukuran);

    int A[100][100], B[100][100], C[100][100];

    printf("Masukkan elemen-elemen matriks A:\n");
    for (int i = 0; i < Ukuran; i++) {
        for (int j = 0; j < Ukuran; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Masukkan elemen-elemen matriks B:\n");
    for (int i = 0; i < Ukuran; i++) {
        for (int j = 0; j < Ukuran; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int Ukuran_sub_matriks = 1;
    while (Ukuran_sub_matriks < Ukuran) {
        Ukuran_sub_matriks *= 2;
    }

    penjumlahan(A, B, C, 0, 0, Ukuran_sub_matriks);

    printf("Hasil penjumlahan matriks:\n");
    for (int i = 0; i < Ukuran; i++) {
        for (int j = 0; j < Ukuran; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

return 0;
}