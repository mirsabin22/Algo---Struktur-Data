#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &n);

    // mengalokasikan memori untuk n bilangan bertipe int
    int *bilangan = (int*) malloc(n * sizeof(int));

    // memeriksa apakah alokasi memori berhasil atau tidak
    if (bilangan == NULL) {
        printf("Alokasi memori gagal!");
        return 1;
    }

    // meminta pengguna memasukkan n bilangan
    printf("Masukkan %d bilangan:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &bilangan[i]);
    }

    // menampilkan bilangan yang telah dimasukkan
    printf("Bilangan yang dimasukkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", bilangan[i]);
    }
    printf("\n");

    // membebaskan memori yang telah dialokasikan
    free(bilangan);

    return 0;
}