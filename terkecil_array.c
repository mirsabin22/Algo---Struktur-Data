#include <stdio.h>

void Kecil_Elemen1(int A[], int n) {
  int min = A[0];
  for (int i = 0; i < n; i++) {
    if (A[i] < min) {
      printf("%d ", A[i]);
    }
  }
  printf("\n");
}

int main() {
  int A[] = {4, 2, 3, 2, 3, 5, 9, 1, 9, 2, 5 };
  int n = sizeof(A) / sizeof(A[0]);
  printf("Isi larik yang nilainya lebih kecil dari elemen pertama adalah : ");
  Kecil_Elemen1(A, n);
  return 0;
}
