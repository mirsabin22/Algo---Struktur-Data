#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    
    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3; // Jumlah disk
    char source = 'A'; // Tiang awal
    char destination = 'C'; // Tiang tujuan
    char auxiliary = 'B'; // Tiang bantu
    
    towerOfHanoi(n, source, destination, auxiliary);
    
    return 0;
}
