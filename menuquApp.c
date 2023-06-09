#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

void menuUtama();
void menuTipePilihan(int id);
void pilihTipe();

// Utitlitas menu untuk tipe pilihan
void tampilkanSpesifikasi(int id);
void tampilkanHarga(int id);
void tampilkanStatus(int id);
void lanjutPembelian(int id);
void sewaRumah(int id);

// Utilitas umum
void masukkanDataPengguna();
void tampilkanDataPengguna();

// Utilitas lainnya
void tab(int n);

void pembayaran();
void struk();
void sudahbayar();

int newmenu = 0;
char dipilih[100];
long int totalbayar;
char nomorq[100];
char namaq[100], asalq[100];
char penghunitype451[100];
char penghunitype90[100];
char status90[] = "ready";
char status45[] = "ready";


void menuInfo();
void daftar();
void fasilitas();
void harga();
void tentangqu();
void aturan();

int stokrumah45;
int stokrumah90;

/*
    Pembuatan database
*/

struct Spesifikasi {
    int lebar;
    int panjang;
    int jumlahKamar;
    char lainnya[100];
};

struct Rumah {
    char nama[100];
    int hargaBulanan;
    struct Spesifikasi sRumah;
    bool isReady;
};

struct Rumah kontrakan[100] = {
    {
        "Tipe45",
        700000,
        { 5, 9, 2, "Carport, Rooftop dan Taman" },
        true,
    },
    {
        "Tipe90",
        900000,
        { 7, 10, 4, "Parkir Mobil, loteng terbuka" },
        true,
    },
};

int jumlahJenisRumah = 1;
// End database

int main() {
    menuUtama();
    return 0;
}

void menuUtama() {
    atas: // start awal goto

    printf("========================================================================================================================\n\n\n\n\n");
    tab(4);
    printf("==================================================\n");
    tab(5);
    printf("Selamat Datang di KontrakanQU!\n");
    tab(4);
    printf("==================================================\n");
    tab(5);
    printf("=========================\n");
    tab(5);
    printf("|\tMENU\t\t|\n");
    tab(5);
    printf("| 1. Pesan Kamar\t|\n");
    tab(5);
    printf("| 2. Tentang KontrakanQU|\n");
    tab(5);
    printf("| 3. Keluar \t\t|\n");
    tab(5);
    if (newmenu >= 1) {
        tab(5);
        printf("| 4. Struk Pembayaran   |\n");
    }
    tab(5);
    printf("=========================\n");
    tab(4);
    printf("______\n");

    int pilihanMenu;
    tab(5);
    printf("Masukkan Pilihan 1 - 3 : ");
    scanf("%d", &pilihanMenu);
    system("cls");
    fflush(stdin);

    switch (pilihanMenu) {
        case 1:
            masukkanDataPengguna();
            system("cls");
            pilihTipe();
            break;
        case 2:
            menuInfo();
        case 3:
            tab(5);
            printf("-------selesai-------\n");
            break;
        case 4:
            struk();
        default:
            tab(4);
            printf("Silahkan Pilih Sesuai Angka");
            system("cls");
            goto atas;
    }
}

// 1
void pilihTipe(){
    int tipePilihan;
    char strukk[10];
    
    tampilkanDataPengguna();

    // Menampilkan daftar rumah
    printf("Daftar Rumah :\n");
    for(int i=0; i<jumlahJenisRumah; i++) 
        printf("%d. %s\n", i+1, kontrakan[i].nama);

    if ((stokrumah90 + stokrumah45) >= 2){//kondisi 2 sold out
        printf("Maaf Kedua Tipe Sudah Sold Out\n");
        printf("Silahkan Kembali Ke Menu Utama Atau Menu Struk\n");
        printf("Kembali?(utama/struk)");scanf("%s", strukk);
        if(strcmp(strukk, "utama") == 0 || strcmp(strukk, "Utama") == 0){
            printf("Anda Akan Kembali Ke Menu Utama ");getch();
            system("cls");
            main();
        }
    } else {
        printf("Pilihan Rumah :");
        scanf("%d", &tipePilihan);
        if(tipePilihan > 0 && tipePilihan <= jumlahJenisRumah) 
            menuTipePilihan(tipePilihan-1);
        else {
            printf("Silahkan Pilih Angka Yang Benar\n");
            getch();system("cls");
            pilihTipe();
        }
    }
}

// 2
void menuInfo() {
    int pilih;
    printf("========================================================================================================================\n\n\n\n\n");
    tab(4);
    printf("==================================================\n");
    tab(4);
    printf("1. Daftar Status Rumah di KontrakanQU\n");
    tab(4);
    printf("2. Fasilitas Yang Tersedia di KontrakanQU\n");
    tab(4);
    printf("3. Harga Sewa Rumah di KontrakanQU\n");
    // tab(4);
    // printf("4. Informasi Tentang KontrakanQU\n");
    tab(4);
    printf("5. Aturan Dan Kontrak di KontrakanQU\n");
    tab(4);
    printf("6. Kembali\n");
    tab(4);
    printf("Silahkan Pilih Menu di Atas (1 - 6) : \n");
    printf("==================================================\n");
    tab(4);
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &pilih);

    switch (pilih) {
        case 1:
            daftar();
            break;
        case 2:
            fasilitas();
            break;
        case 3:
            harga();
            break;
        // case 4:
        //     tentangqu();
            break;
        case 5:
            system("cls");
            aturan();
            break;
        case 6:
            system("cls");
            main();
            break;
    }
}

// 4
void struk(){
    system("cls");
    printf("Anda Telah Melakukan Pembelian : \n");
    tampilkanDataPengguna();printf("Pilihan Tipe Rumah : %s\n", dipilih);
    printf("Silahkan Tekan Apapun Untuk Kembali Ke Menu Utama ");getch();
    system("cls");
    main();
}
// ======

// Pilihan tipe rumah
void menuTipePilihan(int id){
    int pilihanMenu;
    system("cls");
    tab(5);printf("\t\t%s \n", kontrakan[id].nama);
    tab(4);printf("====================================================\n");
    tab(4);printf("1. Spesifikasi Rumah\n");
    tab(4);printf("2. Harga Rumah\n");
    tab(4);printf("3. Status Rumah\n");
    tab(4);printf("4. Kembali\n");
    tab(4);printf("5. Lanjutkan Pembelian\n");
    tab(4);printf("====================================================\n");
    tab(4);printf("Masukkan Pilihan Anda : ");
    scanf("%d", &pilihanMenu);
    system("cls");

    switch(pilihanMenu){
        case 1:
            tampilkanSpesifikasi(id);
            break;
        case 2:
            tampilkanHarga(id);
            break;	
        case 3 :
            tampilkanStatus(id);
            break;
        case 4:
            pilihTipe();
            break;
        case 5:
            lanjutPembelian(id);
            break;
        default :
            tab(4);printf("Silahkan Pilih Angka Yang Benar\n");
            getch();
            menuTipePilihan(id);
    }
}

// Fungsi untuk menu tipe pilihan
void tampilkanSpesifikasi(int id) {
    printf("\n");	
    tab(5);printf("Spesifikasi Rumah  %s \n", kontrakan[id].nama);
    tab(4);printf("====================================================\n");
    tab(4);printf("Ukuran Tanah : %d m X %d m\n", kontrakan[id].sRumah.panjang, kontrakan[id].sRumah.lebar);
    tab(4);printf("Jumlah Kamar : %d Kamar\n", kontrakan[id].sRumah.jumlahKamar);
    tab(4);printf("Spesifikasi lainnya : %s\n", kontrakan[id].sRumah.lainnya);
    tab(4);printf("====================================================\n\n");
    tab(4);printf("Kembali? (Silahkan Tekan Apapun)");getch();printf("\n");
    system("cls");
    menuTipePilihan(id);
}

void tampilkanHarga(int id) {
    printf("\n");
    tab(5);printf("Harga Rumah Tipe 45 \n");
    tab(4);printf("====================================================\n");
    tab(4);printf("Bulanan : Rp. %d\n", kontrakan[id].hargaBulanan);
    tab(4);printf("====================================================\n\n");
    tab(4);printf("Kembali? (Silahkan Tekan Apapun)");getch();printf("\n");
    system("cls");
    menuTipePilihan(id);
}

void tampilkanStatus(int id) {
    tab(4);printf("====================================================\n");
    tab(4);printf("Status Rumah Tipe 45 :\n");tab(4);

    if (kontrakan[id].isReady)
        printf("Ready");
    else 
        printf("Sold Out");

    printf("\n");
    tab(4);printf("====================================================\n");
    tab(4);printf("Kembali? (Silahkan Tekan Apapun)");getch();printf("\n");
    system("cls");
    menuTipePilihan(id);
}

void lanjutPembelian(int id) {
    tab(4);
    printf("Silahkan Konfirmasi Pilihan Anda : \n");

    tampilkanDataPengguna();

    tab(4); printf("Pilihan Rumah Anda : %s\n", kontrakan[id].nama);
    char pilihan;

    tab(4); printf("Lanjut? (Y/N) :");
    scanf("%c", &pilihan);

    if (pilihan == 'Y') {
        if (stokrumah45 >= 1) {
            tab(4); printf("Maaf, Sold Out\n");
            tab(4); printf("Silahkan Pilih Tipe Yang Lain\n");
            getch();
            system("cls");
            pilihTipe();
        } else {
            strcpy(penghunitype451, namaq);
            strcpy(status45, "sold");
            stokrumah45 = stokrumah45 + 1;
            system("cls");
            sewaRumah(id);
        }
    } else if ( pilihan == 'N' ) {
        tab(4);
        printf("Silahkan Isi Ulang Biodata Anda!");
        getch();
        system("cls");
        masukkanDataPengguna();
        system("cls");
        pilihTipe();
    } else lanjutPembelian(id);
}
// ===========

void daftar() {
    system("cls");
    printf("========================================================================================================================\n\n\n\n\n");
    printf("====================Daftar Rumah Tipe 45====================\n");
    printf("|Rumah 1 : %s\n", status45);
    printf("\t\t\t\t\t====================Daftar Rumah Tipe 90====================\n");
    printf("|Rumah 2 : %s\n", status90);
    printf("\t\t\t\t\t============================================================\n");
    printf("Kembali? (Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuInfo();
}

void fasilitas() {
    system("cls");
    printf("========================================================================================================================\n\n\n\n\n");
    printf("\t\tFasilitas KontrakanQU: \n");
    printf("====================================================\n");
    printf("    1. Dekat Dari UIN Alauddin dan Unhas Teknik ( +- 3 KM)\n");
    printf("    2. Sudah Memiliki  Wifi\n");
    printf("    3. Listrik Token\n");
    printf("    4. Dapur Luas\n");
    printf("    5. Kamar mandi Shower\n");
    printf("    6. Air PDAM\n");
    printf("    7. Kamar Full AC\n");
    printf("    8. Parkiran Luas (Carport)\n");
    printf("    9. Dekat Dengan Pasar (+- 200 M)\n");
    printf("    10. Rooftop\n");
    printf("    11. Anti banjir\n");
    printf("    12. Free Perabotan di dalam\n");
    printf("    13. Dekat Masjid\n");
    printf("====================================================\n");

    printf("Kembali? (Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuInfo();
}

void harga() {
    system("cls");
    printf("========================================================================================================================\n\n\n\n\n");
    printf("==================== Harga Sewa Rumah KontrakanQU ====================\n");
    printf("\n");
    printf("\t\tTYPE 45\n");
    printf("\tHarga Rumah Tipe 45 :\n");
    printf("\tBulanan : Rp. 700.000\n");
    printf("\tTahunan : Rp. 8.000.000\n\n");
    printf("\t\tTYPE 90\n");
    printf("\tHarga Rumah Tipe 90 :\n");
    printf("\tBulanan : Rp. 1.000.000\n");
    printf("\tTahunan : Rp. 10.000.000\n\n");
    printf("=======================================================================\n");
    printf("Kembali? (Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuInfo();
}

// void tentangqu(){
//     system("cls");
//     printf("========================================================================================================================\n\n\n\n\n");
//     tab(4);printf("====================Tentang Hermang Homestay====================\n\n");
//     tab(4);printf("1. Tipe 45\n");
//     tab(4);printf("\t- Lokasi = JL. Tun Abdul Razak 1 blok F2 no. 56 \n");
//     tab(4);printf("\t- Nomor yang dapat anda hubungi : 08216798503 (Nabila)\n\n");
//     tab(4);printf("2. Tipe 90\n");
//     tab(4);printf("\t- Lokasi = JL. Tun Abdul Razak 1 blok C3 no 33 \n");
//     tab(4);printf("\t- Nomor yang dapat anda hubungi : 081254323457 (Wanda)\n\n");
//     tab(4);printf("================================================================\n");
//     tab(4);printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
//     system("cls");
//     menuInfo();
// }

void aturan() {
    printf("========================================================================================================================\n\n\n\n\n");
    tab(4);
    printf("====================Aturan dan Kontrak Hermang Homestay====================\n");
    tab(4);
    printf("\n");
    tab(4);
    printf("1. Bayar sewa Tepat Waktu\n");
    tab(4);
    printf("2. Mengikuti Kebijakan yang Berlaku\n");
    tab(4);
    printf("3. Tidak Merusak dan Menghilangkan Barang Pemilik\n");
    tab(4);
    printf("4. Minta Izin untuk Melakukan Perbaikan Properti\n");
    tab(4);
    printf("5. Memberitahu Pemilik Rumah jika Ada Kerusakan\n\n");
    tab(4);
    printf("==================================================\n");
    tab(4);
    printf("Kembali? (Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuInfo();
}

void sewaRumah(int id){
    int beli, bulan;
    system("cls");
    tab(4);printf("\n");
    tab(4);printf("Kamar ini akan di tempati oleh %s (anda)\n", namaq);
    tab(4);printf("Masukkan Masa Sewa Anda (Bulan) :");scanf("%d", &bulan);
    tab(4);printf("Anda akan Menyewa Rumah %s Selama %d bulan\n", kontrakan[id].nama, bulan);
    totalbayar = kontrakan[id].hargaBulanan * bulan;
    tab(4);printf("Atau %d Tahun dan %d bulan \n\n", bulan / 12, bulan % 12);
    tab(4);printf("Silahkan Tekan Apapun Untuk Melanjutkan Ke Menu Pembayaran");getch();    
    pembayaran();
}

void pembayaran() {
    int bayar;
    long nominal;
    system("cls");
    printf("\t\t\tMetode Pembayaran\n");
    printf("\t\t\t1. Tunai\n");
    printf("\t\t\t2. Transfer\n");
    printf("Silahkan Pilih Pembayaran: ");
    scanf("%d", &bayar);

    switch (bayar) {
        case 1: {
            system("cls");
            atas:
            printf("\t\tAnda Memilih Pembayaran Tunai\n");
            printf("\t\tTotal Pembayaran Anda adalah %ld\n", totalbayar);
            printf("\t\tMasukkan Uang anda: ");
            scanf("%ld", &nominal);
            if (nominal < totalbayar) {
                printf("\t\tUang anda kurang Rp. %ld silahkan isi kembali\n\n", totalbayar - nominal);
                getch();
                system("cls");
                goto atas;
            } else if (nominal > totalbayar) {
                printf("\t\tUang Anda Lebih, Kembalian Anda adalah %ld, Terima Kasih\n", nominal - totalbayar);
            } else if (nominal == totalbayar) {
                printf("\t\tUang Anda Pas, Terima Kasih\n");
            }
            sudahbayar();
            break;
        }
        case 2: {
            char yesno[3];
            int rekening;
            long wang;
            int rek = 123456;
            system("cls");
            printf("\t\t\t==================================================\n\n");
            printf("\t\t\tAnda Memilih Pembayaran Transfer\n");
            printf("\t\t\tTotal Pembayaran Anda adalah %ld\n", totalbayar);
            printf("\t\t\tSilahkan Transfer Uang Anda Melalui TRANSFER MOBILE\n");
            printf("\t\t\t==================================================\n");
            printf("\t\t\t Anda akan di Arahkan langsung ke TRANSFER MOBILE\n");
            printf("\t\t\tSilahkan Tekan Apapun Untuk Melanjutkan Ke Transfer MOBILE ");
            getch();

            atas1:
            system("cls");
            printf("\t\t\t==================================================\n");
            printf("\t\t\tTRANSFER MOBILE\n");
            printf("\t\t\t==================================================\n");
            printf("\t\t\t\tSelamat Datang di Transfer MOBILE\n");
            printf("\t\t\tSilahkan Masukkan Nominal Transfer Anda\n");
            printf("\t\t\tTotal Tagihan Anda adalah Rp. %ld\n", totalbayar);
            printf("\t\t\tMasukkan Uang Anda: ");
            scanf("%ld", &wang);
            printf("\t\t\tAnda Mentransfer Uang Sebesar Rp. %ld\n", wang);
            printf("\t\t\tTekan Apapun untuk Melanjutkan\n");
            getch();

            if (wang < totalbayar) {
                printf("\t\t\tUang Transfer anda kurang Rp. %ld silahkan isi kembali\n\n", totalbayar - wang);
                getch();
                system("cls");
                goto atas1;
            } else if (wang > totalbayar) {
                printf("\t\t\tUang Transfer Anda Lebih, Kembalian Anda adalah %ld, Terima Kasih\n", wang - totalbayar);
                printf("\t\t\tKembalian Anda Akan kami Transfer Balik\n");
            } else if (wang == totalbayar) {
                printf("\t\t\tUang Transfer Anda Pas, Terima Kasih\n\n");
                printf("\t\t\t==================================================\n\n");
            }
            sudahbayar();
            break;
        }
    }
}

void sudahbayar(){
		char bayarr[10],bayarrr[10];
		tab(4);printf("==================================================\n");
		tab(4);printf("Anda sudah melakukan pembelian\n");
		tab(4);printf("Apakah ingin kembali ke menu lagi(ya/no)?\n");
		newmenu++; // Untuk menampilkan menu baru pada menu utama
		tab(4);printf("Masukkan Pilihan Anda :");scanf("%s", bayarr);
		if (strcmp(bayarr, "ya") == 0 || strcmp(bayarr, "Ya") == 0 || strcmp(bayarr, "YA") == 0){
			tab(4);printf("Anda akan kembali ke Menu Utama Lagi ");getch();
			system("cls");
			main();
		}else if (strcmp(bayarr, "no") == 0 || strcmp(bayarr, "No") == 0 || strcmp(bayarr, "NO") == 0){
			tab(4);printf("Apakah Anda Yakin? (ya/no) : ");scanf("%s", bayarrr);
			if( strcmp(bayarrr, "ya") == 0 || strcmp(bayarrr, "Ya") == 0 || strcmp(bayarrr, "YA") == 0){
				system("cls");
				printf("\n\n");
				tab(4);printf("Terima Kasih telah menggunakan program kami ");
				printf(" ");
			}else if( strcmp(bayarrr, "no") == 0 || strcmp(bayarrr, "No") == 0 || strcmp(bayarrr, "NO") == 0){
				system("cls");
				sudahbayar();
			}
		}
}

/*
    Utilitas umum
*/
void masukkanDataPengguna() {
    tab(5);
    printf("Mengontrak Rumah \n");
    tab(4);
    printf("====================================================\n");
    tab(4);
    printf("Silahkan Isi Biodata \n");
    tab(4);
    printf("Masukkan Nama           : ");
    fgets(namaq, 100, stdin);
    tab(4);
    printf("Masukkan Asal           : ");
    fgets(asalq, 100, stdin);
    tab(4);
    printf("Masukkan Nomor Telepon  : ");
    scanf("%s",nomorq);

    tampilkanDataPengguna();
}

void tampilkanDataPengguna() {
    tab(4);
    printf("====================================================\n");
    tab(4);
    printf("Biodata Anda\n");
    tab(4);
    printf("Nama         : %s\n", namaq);
    tab(4);
    printf("Asal         : %s\n", asalq);
    tab(4);
    printf("Nomor telpon : %s\n", nomorq);
    printf("\n\n\n");
    tab(4);
    printf("====================================================\n");
}

/*
    Utilitas lainnya
*/
void tab(int n){
    for(int i=0; i<n; i++)
		printf("\t");
}
