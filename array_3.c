#include <stdio.h>

int main() {
    char arr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int n = 0; 

    for (int i = 1; i<=4; i++){
        for (int j = 1; j <=i; j++){
            printf("%c", arr[n]);
            n++;
        }
        printf("\n");
    }
return 0;
}