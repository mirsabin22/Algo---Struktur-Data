#include <stdio.h>

int main() {
    int saldo, kode, setoran, tarikan;
    printf("Masukkan saldo awal: ");
    scanf("%d", &saldo);
    
    if (saldo < 10000) {
        printf("Anda tidak dapat melakukan transaksi karena saldo minimal anda tidak mencukupi\n");
    }
    
    while (saldo >= 10000) {
        printf("0 Untuk setor uang tunai\n");
        printf("1 Untuk tarik uang tunai\n");
        printf("2 Keluar dari transaksi\n");
        printf("Masukkan kode transaksi: ");
        scanf("%d", &kode);
    
        
        if (kode == 0) {
            printf("Masukkan jumlah uang: ");
            scanf("%d", &setoran);
            saldo += setoran;
            printf("Saldo akhir: %d\n", saldo);
        } else if (kode == 1) {
                printf("Masukkan jumlah uang: ");
                scanf("%d", &tarikan);
            if (saldo <= 10000){
                printf("Maaf transaksi tidak dapat dilakukan\n");
            }else if (tarikan > saldo - 10000) {
                printf("Saldo anda tidak mencukupi\n");
            } else {
                saldo -= tarikan;
                printf("Saldo akhir: %d\n", saldo);
            }
        } else if (kode == 2){
            printf("Transaksi selesai, terima kasih\n");
            break;
        }
         else {
            printf("Kode transaksi tidak valid\n");
        }
        }
           
    
    
    return 0;
}
