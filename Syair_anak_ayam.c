#include <stdio.h>

int main() {
    printf("Syair anak ayamku \n");
    int jumlahanak = 10;
    for (int i = jumlahanak; i > 0; i--) {
        printf("anak ayamku turun %d\n ", i);
        if (i > 1) {
            printf("mati satu tinggal %d\n", i-1);
        } else {
            printf("mati satu tinggal saya\n");
        }
    }

    return 0;
}