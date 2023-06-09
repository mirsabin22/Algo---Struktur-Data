#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *nama;

    // mengalokasikan memori untuk string nama
    nama = (char*) malloc(20 * sizeof(char));

    // memeriksa apakah alokasi memori berhasil atau tidak
    if (nama == NULL) {
        printf("Alokasi memori gagal!");
        return 1;
    }

    // meminta pengguna memasukkan nama
    printf("Masukkan nama: ");
    fgets(nama, 20, stdin);
    nama[strcspn(nama, "\n")] = 0;

    // menampilkan nama yang telah dimasukkan
    printf("Nama: %s\n", nama);

    // membebaskan memori yang telah dialokasikan
    free(nama);

    return 0;
}
