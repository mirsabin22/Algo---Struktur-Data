#include <stdio.h>


int main() {
    char nama[50];
    char golongan;
    int jam;
    int upah_reguler;
    int gaji;
    int lembur;
    int gaji_total;


    printf("Masukkan nama karyawan: ");
    scanf("%[^\n]", nama);
    getchar();

    printf("Masukkan golongan karyawan (A/B/C/D): ");
    scanf("%c", &golongan);
    getchar();

    printf("Masukkan jam kerja: ");
    scanf("%d", &jam);

    if (golongan == 'A') {
        upah_reguler = 5000;
    } else if (golongan == 'B') {
        upah_reguler = 6000;
    } else if (golongan == 'C') {
        upah_reguler = 7500;
    } else if (golongan == 'D') {
        upah_reguler = 9000;
    } else {
        printf("Invalid");
    }

    if (jam <= 150) {
        gaji = jam * upah_reguler;
    } else {
        gaji = 150 * upah_reguler;
    }

    if (jam <= 150) {
        lembur = 0;
    } else {
        lembur = (jam-150) * (upah_reguler*0.25 + upah_reguler);
    }

    gaji_total = gaji + lembur;

    printf("Nama karyawan: %s\n", nama);
    printf("Golongan anda: %c\n", golongan);
    printf("Jam kerja: %d jam\n", jam);
    printf("Gaji Anda: %d \n", gaji);
    printf("Gaji lembur: %d\n",lembur);
    printf("Total gaji: %d\n", gaji_total);

    return 0;
}