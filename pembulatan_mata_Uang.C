#include <stdio.h>

int main (){
    int total_belanja, sisa, hasil_pembulatan;

    printf("Total Belanja Anda :\n");
    scanf("%d", &total_belanja);

    sisa = total_belanja % 25;
    hasil_pembulatan = total_belanja - sisa;

    printf("Total Belanja Anda Setelah Dibulatkan : Rp.%d", hasil_pembulatan);
   
    return 0;
    
}
