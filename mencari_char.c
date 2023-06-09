#include <stdio.h>

int main() {
    int m, n, i, j, muncul=0;
    char C[100][100];

    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &m);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &n);

    printf("Masukkan elemen matriks: \n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf(" %c", &C[i][j]);
        }
    }

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (C[i][j] == 'A') {
                muncul++;
            }
        }
    }

    printf("Frekuensi kemunculan huruf 'A': %d\n", muncul);

    return 0;
}
