#include <stdio.h>
#include <math.h>

int main() {
    float v0 = 1;
    float a = 0.1;
    float t = 100;
    float v = v0 + a * t; 
    float s = v0 * t + 0.5 * a * pow(t, 2);

    printf("Kecepatan pada waktu t adalah %.2f m/s\n", v);
    printf("Jarak yang ditempuh selama waktu t adalah %.2f m\n", s);
    return 0;
}
