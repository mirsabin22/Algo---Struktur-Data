#include <stdio.h>
int sum(int num){
    if (num!=0)
        return num + sum(num-1);
    else
        return num;
}

int main(){
    int bilangan, hasil_deret;

    printf("Masukkan bilangan positif: ");
    scanf("%d", &bilangan);

    hasil_deret = sum(bilangan);

    printf("sum = %d", hasil_deret);
}

