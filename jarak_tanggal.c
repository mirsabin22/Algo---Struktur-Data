#include <stdio.h>
#include <math.h>

int main() {
    int tgl1, bln1, thn1;
    int tgl2, bln2, thn2;
    int selisih_tahun, selisih_bulan, selisih_hari;

    
    printf("Masukkan tanggal pertama (dd:mm:yyyy): ");
    scanf("%d:%d:%d", &tgl1, &bln1, &thn1);

    
    printf("Masukkan tanggal kedua (dd:mm:yyyy): ");
    scanf("%d:%d:%d", &tgl2, &bln2, &thn2);

    
    selisih_hari  = abs (tgl2 - tgl1);
    selisih_bulan = abs (bln2 - bln1);
    selisih_tahun = abs (thn2 - thn1);

    
    printf("Jarak antara kedua tanggal adalah %d tahun, %d bulan, %d hari", selisih_tahun, selisih_bulan, selisih_hari);

    return 0;
}
