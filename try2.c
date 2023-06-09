#include <stdio.h>

// Fungsi untuk melakukan penjumlahan array
void tambahMatriks(int N, int A[][N], int B[][N], int C[][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Fungsi untuk membagi array menjadi empat bagian
void bagiMatriks(int N, int M, int A[][M], int B[][M], int C[][M]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Fungsi untuk menggabungkan empat bagian array
void gabungMatriks(int N, int M, int A[][M], int B[][M], int C[][M]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Fungsi untuk melakukan penjumlahan array dengan pendekatan divide and conquer
void penjumlahanDivideConquer(int N, int A[][N], int B[][N], int C[][N]) {
    if (N == 1) {
        C[0][0] = A[0][0] + B[0][0];
    } else {
        int M = N / 2;
        int A11[M][M], A12[M][M], A21[M][M], A22[M][M];
        int B11[M][M], B12[M][M], B21[M][M], B22[M][M];
        int C11[M][M], C12[M][M], C21[M][M], C22[M][M];
        int P1[M][M], P2[M][M], P3[M][M], P4[M][M], P5[M][M], P6[M][M], P7[M][M];
        int TMP1[M][M], TMP2[M][M];

        int i, j;

        // Membagi matriks A menjadi empat bagian
        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                A11[i][j] = A[i][j];
                A12[i][j] = A[i][j + M];
                A21[i][j] = A[i + M][j];
                A22[i][j] = A[i + M][j + M];

                B11[i][j] = B[i][j];
                B12[i][j] = B[i][j + M];
                B21[i][j] = B[i + M][j];
                B22[i][j] = B[i + M][j + M];
            }
        }

        // Menghitung P1, P2, P3, P4, P5, P6, P7
        bagiMatriks(M, M, A11, A22, TMP1);
        bagiMatriks(M, M, B11, B22, TMP2);
        penjumlahanDivideConquer(M, TMP1, TMP2, P1);

        bagiMatriks(M, M, A21, A22, TMP1);
        penjumlahanDivideConquer(M, TMP1, B11, P2);

        bagiMatriks(M, M, B12, B22, TMP1);
        penjumlahanDivideConquer(M, A11, TMP1, P3);

        bagiMatriks(M, M, B21, B11, TMP1);
        penjumlahanDivideConquer(M, A22, TMP1, P4);

        bagiMatriks(M, M, A11, A12, TMP1);
        penjumlahanDivideConquer(M, TMP1, B22, P5);

        bagiMatriks(M, M, A21, A11, TMP1);
        bagiMatriks(M, M, B11, B12, TMP2);
        penjumlahanDivideConquer(M, TMP1, TMP2, P6);

        bagiMatriks(M, M, A12, A22, TMP1);
        bagiMatriks(M, M, B21, B22, TMP2);
        penjumlahanDivideConquer(M, TMP1, TMP2, P7);

        // Menghitung C11, C12, C21, C22 menggunakan P1, P2, P3, P4, P5, P6, P7
        gabungMatriks(M, M, P1, P4, TMP1);
        gabungMatriks(M, M, TMP1, P7, C11);

        gabungMatriks(M, M, P3, P5, C12);

        gabungMatriks(M, M, P2, P4, C21);

        gabungMatriks(M, M, P1, P3, TMP1);
        gabungMatriks(M, M, TMP1, P6, C22);

        // Menggabungkan empat bagian matriks C menjadi satu matriks C
        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                C[i][j] = C11[i][j];
                C[i][j + M] = C12[i][j];
                C[i + M][j] = C21[i][j];
                C[i + M][j + M] = C22[i][j];
            }
        }
    }
}

// Fungsi untuk mencetak matriks
void cetakMatriks(int N, int A[][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Masukkan ukuran matriks: ");
    scanf("%d", &N);

    int A[N][N], B[N][N], C[N][N];
    int i, j;

    printf("Masukkan elemen-elemen matriks A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Masukkan elemen-elemen matriks B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    penjumlahanDivideConquer(N, A, B, C);

    printf("Hasil penjumlahan matriks A dan B:\n");
    cetakMatriks(N, C);

    return 0;
}
