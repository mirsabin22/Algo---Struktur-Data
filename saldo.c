#include <stdio.h>

int main() {
    int saldo, kode, uang, saldo_akhir;
    printf("Masukkan saldo awal: ");
    scanf("%d", &saldo);
    
    if (saldo <= 10000) {
        printf("Anda tidak dapat melakukan transaksi karena saldo minimal anda tidak mencukupi\n");
        return 0;
    }
    
    while (saldo > 10000) {
        printf("Masukkan kode transaksi\n");
        printf("0 = Untuk setor uang tunai\n");
        printf("1 = Untuk tarik uang tunai\n");
        printf("2 = Keluar dari transaksi\n");
        printf("Masukkan kode transaksi: ");
        scanf("%d", &kode);
        
        if (kode == 2) {
            printf("Transaksi selesai, terima kasih\n");
            break;
        }
        
        printf("Masukkan jumlah uang: ");
        scanf("%d", &uang);
        
        if (kode == 0) {
            saldo_akhir = saldo + uang;
            printf("Saldo akhir: %d\n", saldo_akhir);
        } else if (kode == 1) {
            if (uang > saldo - 10000) {
                printf("Jumlah uang yang ingin diambil melebihi saldo yang tersedia\n");
            } else {
                saldo_akhir = saldo - uang;
                printf("Saldo akhir: %d\n", saldo_akhir);
            }
        } else {
            printf("Kode transaksi tidak valid\n");
        }
    }
    
    return 0;
}
