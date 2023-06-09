#include <stdio.h>

void penjumlahan(int A[][100], int B[][100], int C[][100], int Baris, int Kolom, int Ukuran) {
    if (Ukuran == 1) {
        C[Baris][Kolom] = A[Baris][Kolom] + B[Baris][Kolom];
        return;
    }
    int Ukuran_submatriks = Ukuran / 2;
    // Atas-kiri
    penjumlahan(A, B, C, Baris, Kolom, Ukuran_submatriks);
    // Atas-kanan
    penjumlahan(A, B, C, Baris, Kolom + Ukuran_submatriks, Ukuran_submatriks);
    // Bawah-kiri
    penjumlahan(A, B, C, Baris + Ukuran_submatriks, Kolom, Ukuran_submatriks);
    // Bawah-kanan
    penjumlahan(A, B, C, Baris + Ukuran_submatriks, Kolom + Ukuran_submatriks, Ukuran_submatriks);
}
int main() {
    int Ukuran;
    printf("Masukkan ukuran matriks: ");
    scanf("%d", &Ukuran);

    int A[100][100], B[100][100], C[100][100], D[100][100];

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
    printf("Masukkan elemen-elemen matriks C:\n");
    for (int i = 0; i < Ukuran; i++) {
        for (int j = 0; j < Ukuran; j++) {
            scanf("%d", &C[i][j]);
        }
    }
    int Ukuran_submatriks = 1;
    while (Ukuran_submatriks < Ukuran) {
        Ukuran_submatriks *= 2;
    }
    penjumlahan(A, B, D, 0, 0, Ukuran_submatriks);
    penjumlahan(D, C, D, 0, 0, Ukuran_submatriks);
    printf("Hasil penjumlahan matriks:\n");
    for (int i = 0; i < Ukuran; i++) {
        for (int j = 0; j < Ukuran; j++) {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }
    return 0;
}
