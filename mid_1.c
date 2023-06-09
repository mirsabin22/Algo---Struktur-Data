#include <stdio.h>

int main() {
    float jarak = 0.0;
    float kecepatan = 1.0;
    int waktu = 100;

    for (int i = 1; i <= waktu; i++) {
        jarak += kecepatan;
        kecepatan += 0.1;
    }

    printf("Jarak yang ditempuh setelah 100 detik adalah %.2f meter\n", jarak);

    return 0;
}
