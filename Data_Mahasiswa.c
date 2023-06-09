#include <stdio.h>
#include <string.h>

struct daftar_kontak {
    char nama[50];
    char alamat[50];
    char no_telp[20];
    char email[50];
};

int main() {
    struct daftar_kontak mahasiswa[30];
    int jawaban, 
    jumlah = 0;
    char input[50];

    printf("\nSelamat Datang di Daftar Kontak Mahasiswa Informatika Kelas A");
    
    while(1) {
        printf("\n1. Daftar Kontak");
        printf("\n2. Mengisi Daftar Kontak");
        printf("\n3. Keluar");
        printf("\nPilihan: ");
        scanf("%d", &jawaban);

        if (jawaban == 1) {
            if (jumlah == 0) {
                printf("\nDaftar Kontak masih kosong\n");
            } else {
                printf("\nMenampilkan Kontak\n------------------");
                for (int i = 0; i < jumlah; i++) {
                    printf("\nKontak #%d", i + 1);
                    printf("\nNama     : %s", mahasiswa[i].nama);
                    printf("\nAlamat   : %s", mahasiswa[i].alamat);
                    printf("\nNo. Telp : %s", mahasiswa[i].no_telp);
                    printf("\nEmail    : %s", mahasiswa[i].email);
                    printf("\n");
                }
            }
        } else if (jawaban == 2) {
            scanf("%c");
            printf("\nMenambah Kontak\n---------------");
            printf("\nMasukkan nama: ");
            scanf("%[^\n]%*c", &input);
            strcpy(mahasiswa[jumlah].nama, input);
            printf("Masukkan alamat: ");
            scanf("%[^\n]%*c", &input);
            strcpy(mahasiswa[jumlah].alamat, input);
            printf("Masukkan no. telp: ");
            scanf("%[^\n]%*c", &input);
            strcpy(mahasiswa[jumlah].no_telp, input);
            printf("Masukkan email: ");
            scanf("%[^\n]%*c", &input);
            strcpy(mahasiswa[jumlah].email, input);
            jumlah++;
        } else if (jawaban == 3) {
            break;
        }
    }
    return 0;
}