#include <stdio.h>
#include <ctype.h>
#include <string.h>

void lower(char *klm) {
    int kal = strlen(klm);
    for (int i = 0; i < kal; i++) {
        klm[i] = toupper(klm[i]);
    }
}

int main() {
    char kalimat[100];
    printf("Masukkan kalimat dengan lowercase: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    lower(kalimat);
    printf("Kalimat yang diubah menjadi uppercase: %s\n", kalimat);

    return 0;
}