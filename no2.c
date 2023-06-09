#include <stdio.h>

void input_and_print_angka() {
    int total = 0;
    int jumlah = 0;
    int bilangan;
    while (total < 10 && jumlah <= 1000) {
        printf("Masukkan sebuah bilangan: ");
        scanf("%d", &bilangan);
        if (bilangan == 999) {
            break;
        }
        total++;
        jumlah += bilangan;
        printf("Bilangan yang dimasukkan adalah: %d\n", bilangan);
        printf("Total bilangan yang sudah dimasukkan: %d\n", jumlah);
    }
    printf("Proses selesai.\n");
}

int main() {
    input_and_print_angka   ();
    return 0;
}
