#include <stdio.h>

int main() {
  int nilai[] = {10, 50, 30, 40, 20, 55, 95, 80, 88, 70};
  int n = sizeof(nilai) / sizeof(nilai[0]);
  int max = nilai[0]; 

  for (int i = 1; i < n; i++) {
    if (nilai[i] > max) {
      max = nilai[i];
    }
  }

  printf("Nilai terbesar dari mahasiswa %d", max);

  return 0;
}