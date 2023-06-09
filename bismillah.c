#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void tab4();
void tab5();
void type45();
void type90();
void pilihtype();
void pilihrumahtype45();
void pilihrumahtype90();
void membeli45();
void membeli90();
void pembayaran();
void struk();
void sudahbayar();

int newmenu;
char dipilih[100];
long int totalbayar;
char nomorq[100];
char namaq[100], asalq[100];
char penghunitype451[100];
char penghunitype90[100];
char status90[] = "ready";
char status45[] = "ready";

void menuqu();
    void daftar();
    void fasilitas();
    void harga();
    void tentangqu();
    void aturan();
    void menu();
    void pesan();
void tentangmain();
int stokrumah45;
int stokrumah90;

int main() {
    menu();
}

void aturan() {
    printf("========================================================================================================================\n\n\n\n\n");
    tab4();
    printf("====================Aturan dan Kontrak Hermang Homestay====================\n");
    tab4();
    printf("\n");
    tab4();
    printf("1. Bayar sewa Tepat Waktu\n");
    tab4();
    printf("2. Mengikuti Kebijakan yang Berlaku\n");
    tab4();
    printf("3. Tidak Merusak dan Menghilangkan Barang Pemilik\n");
    tab4();
    printf("4. Minta Izin untuk Melakukan Perbaikan Properti\n");
    tab4();
    printf("5. Memberitahu Pemilik Rumah jika Ada Kerusakan\n\n");
    tab4();
    printf("==================================================\n");
    tab4();
    printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuqu();
}

void bio() {
    tab4();
    printf("====================================================\n");
    tab4();
    printf("Biodata Anda\n");
    tab4();
    printf("Nama         : %s\n", namaq);
    tab4();
    printf("Asal         : %s\n", asalq);
    tab4();
    printf("Nomor telpon : %s\n", nomorq);
    printf("\n\n\n");
    tab4();
    printf("====================================================\n");
}

void bioqu() {
    tab5();
    printf("Mengontrak Rumah \n");
    tab4();
    printf("====================================================\n");
    tab4();
    printf("Silahkan Isi Biodata \n");
    tab4();
    printf("Masukkan Nama           : ");
    scanf("%s", namaq);
    tab4();
    printf("Masukkan Asal           : ");
    scanf("%s", asalq);
    tab4();
    printf("Masukkan Nomor Telepon  : ");
    scanf("%s", nomorq);

    bio();
}
void daftar() {
    system("cls");
    printf("========================================================================================================================\n\n\n\n\n");
    printf("====================Daftar Rumah Type 45====================\n");
    printf("|Rumah 1 : %s\n", status45);
    printf("\t\t\t\t\t====================Daftar Rumah Type 90====================\n");
    printf("|Rumah 2 : %s\n", status90);
    printf("\t\t\t\t\t============================================================\n");
    printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuqu();
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

    printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuqu();
}

void harga() {
    system("cls");
    printf("========================================================================================================================\n\n\n\n\n");
    printf("==================== Harga Sewa Rumah KontrakanQU ====================\n");
    printf("\n");
    printf("\t\tTYPE 45\n");
    printf("\tHarga Rumah Type 45 :\n");
    printf("\tBulanan : Rp. 700.000\n");
    printf("\tTahunan : Rp. 8.000.000\n\n");
    printf("\t\tTYPE 90\n");
    printf("\tHarga Rumah Type 90 :\n");
    printf("\tBulanan : Rp. 1.000.000\n");
    printf("\tTahunan : Rp. 10.000.000\n\n");
    printf("=======================================================================\n");
    printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");
    getch();
    printf("\n");
    system("cls");
    menuqu();
}

void membeli45() {
    int beli, bulan;
    system("cls");
    printf("\n");
    printf("Silahkan Memilih Masa Sewa :\n");
    printf("Kamar ini akan di tempati oleh %s (anda)\n", namaq);
    printf("Silahkan Pilih Waktu anda\n");
    printf("1. Bulanan\n");
    printf("2. Tahunan \n");
    printf("Pilihan Waktu anda : ");
    scanf("%d", &beli);
    system("cls");
    switch (beli) {
        case 1:
            printf("Anda Memilih Bulanan\n");
            printf("Masukkan Masa Sewa Anda :");
            scanf("%d", &bulan);
            printf("Anda akan Menyewa Rumah %s Selama %d bulan\n", dipilih, bulan);

            if (bulan < 12) {
                totalbayar = 700000 * bulan;
                printf("Silahkan Tekan Apapun Untuk Melanjutkan");
                getch();
                pembayaran();
            }
            else if (bulan >= 12) {
                printf("Atau %d Tahun dan %d bulan \n\n", bulan / 12, bulan % 12);
                totalbayar = 700000 * bulan;
                printf("Silahkan Tekan Apapun Untuk Melanjutkan");
                getch();
                pembayaran();
            }
            break;
        case 2:
            printf("Anda Memilih Tahunan\n");
            printf("Masukkan Masa Sewa Anda :");
            scanf("%d", &bulan);
            printf("Anda akan Menyewa Rumah %s Selama %d Tahun\n", dipilih, bulan);
            totalbayar = 8000000 * bulan;
            printf("Silahkan Tekan Apapun Untuk Melanjutkan Ke Menu Pembayaran");
            getch();
            pembayaran();
            break;
    }
}

void membeli90(){
    int beli, bulan, bulansisa;
    system("cls");
    tab4();printf("\n");
    tab5();printf("Silahkan Memilih Masa Sewa :\n");
    tab4();printf("Kamar ini akan di tempati oleh %s (anda)\n", namaq);
    tab4();printf("Silahkan Pilih Waktu anda\n");
    tab4();printf("1. Bulanan\n");
    tab4();printf("2. Tahunan \n");
    tab4();printf("Pilihan Waktu anda : ");scanf("%d", &beli);
    system("cls");
    switch(beli){
        case 1:
            tab4();printf("Anda Memilih Bulanan\n");
            tab4();printf("Masukkan Masa Sewa Anda :");scanf("%d", &bulan);
            tab4();printf("Anda akan Menyewa Rumah %s Selama %d bulan\n", dipilih, bulan);
            totalbayar = 1000000 * bulan;
            if(bulan < 12){
                tab4();printf("Silahkan Tekan Apapun Untuk Melanjutkan Ke Menu Pembayaran ");getch();    
                pembayaran();
            } else if (bulan >= 12 ) {
                tab4();printf("Atau %d Tahun dan %d bulan \n\n", bulan / 12, bulan % 12);
                tab4();printf("Silahkan Tekan Apapun Untuk Melanjutkan Ke Menu Pembayaran");getch();    
                pembayaran();
            }
            break;
        case 2:
            tab4();printf("Anda Memilih Tahunan\n");
            tab4();printf("Masukkan Masa Sewa Anda :");scanf("%d", &bulan);
            tab4();printf("Anda akan Menyewa Rumah %s Selama %d Tahun\n", dipilih, bulan);
            totalbayar = 10000000 * bulan;
            tab4();printf("Silahkan Tekan Apapun Untuk Melanjutkan Ke Menu Pembayaran");getch();    
            pembayaran();
            break;
    }
}
void menu() {
    atas: // start awal goto
    printf("========================================================================================================================\n\n\n\n\n");
    tab4();
    printf("==================================================\n");
    tab5();
    printf("Selamat Datang di KontrakanQU!\n");
    tab4();
    printf("==================================================\n");
    tab5();
    printf("=========================\n");
    tab5();
    printf("|\tMENU\t\t|\n");
    tab5();
    printf("| 1. Pesan Kamar\t|\n");
    tab5();
    printf("| 2. Tentang KontrakanQU|\n");
    tab5();
    printf("| 3. Keluar \t\t|\n");
    tab5();
    if (newmenu >= 1) {
        tab5();
        printf("| 4. Struk Pembayaran   |\n");
    }
    tab5();
    printf("=========================\n");
    tab4();
    printf("______\n");
    int pilihan;
    tab5();
    printf("Masukkan Pilihan 1 - 3 : ");
    scanf("%d", &pilihan);
    switch (pilihan) {
        case 1:
            system("cls");
            bioqu();
            tab4();
            bio();
            system("cls");
            pilihtype();
            break;
        case 2:
            system("cls");
            tentangmain();
        case 3:
            tab5();
            printf("-------selesai-------\n");
            break;
        case 4:
            struk();
            default:
            tab4();
            printf("Silahkan Pilih Sesuai Angka");
            system("cls");
            goto atas;
    }
}
void menuqu() {
    int pilih;
    printf("========================================================================================================================\n\n\n\n\n");
    tab4();
    printf("==================================================\n");
    tab4();
    printf("1. Daftar Status Rumah di KontrakanQU\n");
    tab4();
    printf("2. Fasilitas Yang Tersedia di KontrakanQU\n");
    tab4();
    printf("3. Harga Sewa Rumah di KontrakanQU\n");
    tab4();
    printf("4. Informasi Tentang KontrakanQU\n");
    tab4();
    printf("5. Aturan Dan Kontrak di KontrakanQU\n");
    tab4();
    printf("6. Kembali\n");
    tab4();
    printf("Silahkan Pilih Menu di Atas (1 - 6) : \n");
    printf("==================================================\n");
    tab4();
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
        case 4:
            tentangqu();
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
void pilihrumahtype45() {
    tab4();
    printf("Silahkan Konfirmasi Pilihan Anda : \n");
    bio();
    tab4();
    printf("Pilihan Type Rumah Anda : %s\n", dipilih);
    char p45[3];
    tab4();
    printf("Lanjut?(ya/no) :");
    scanf("%s", p45);

    if (strcmp(p45, "ya") == 0 || strcmp(p45, "YA") == 0) {
        if (stokrumah45 >= 1) {
            tab4();
            printf("Maaf, Sold Out\n");
            tab4();
            printf("Silahkan Pilih Type Yang Lain\n");
            getch();
            system("cls");
            pilihtype();
        } else {
            strcpy(penghunitype451, namaq);
            strcpy(status45, "sold");
            stokrumah45 = stokrumah45 + 1;
            system("cls");
            membeli45();
        }
    } else if (strcmp(p45, "no") == 0 || strcmp(p45, "NO") == 0) {
        tab4();
        printf("Silahkan Isi Ulang Biodata Anda!");
        getch();
        system("cls");
        bioqu();
        system("cls");
        pilihtype();
    }
}

void pilihrumahtype90() {
    tab4();
    printf("Silahkan Konfirmasi Pilihan Anda : \n");
    bio();
    tab4();
    printf("Pilihan Type Rumah Anda : %s\n", dipilih);
    char p90[3];
    tab4();
    printf("Lanjut?(ya/no) :");
    scanf("%s", p90);

    if (strcmp(p90, "ya") == 0 || strcmp(p90, "YA") == 0) {
        if (stokrumah90 >= 1) {
            tab4();
            printf("Maaf, Sold Out\n");
            tab4();
            printf("Silahkan Pilih Type Yang Lain\n");
            getch();
            system("cls");
            pilihtype();
        } else {
            strcpy(penghunitype451, namaq);
            strcpy(status45, "sold");
            stokrumah90 = stokrumah90 + 1;
            membeli90();
        }
    } else if (strcmp(p90, "no") == 0 || strcmp(p90, "NO") == 0) {
        tab4();
        printf("Silahkan Isi Ulang Biodata Anda!");
        getch();
        system("cls");
        bioqu();
        system("cls");
        pilihtype();
    }
}
void pilihtype(){
    bio();
    int ptype;
    char strukk[10];
    printf("Silahkan Pilih Type Rumah Anda :\n");
    printf("1. Type 45\n");
    printf("2. Type 90\n");
    if ((stokrumah90 + stokrumah45) >= 2){//kondisi 2 sold out
        printf("Maaf Kedua Type Sudah Sold Out\n");
        printf("Silahkan Kembali Ke Menu Utama Atau Menu Struk\n");
        printf("Kembali?(utama/struk)");scanf("%s", strukk);
        if(strcmp(strukk, "utama") == 0 || strcmp(strukk, "Utama") == 0){
            printf("Anda Akan Kembali Ke Menu Utama ");getch();
            system("cls");
            main();
        }
    } else {//kondisi baru beli
        printf("Pilih Type Rumah :");scanf("%d", &ptype);
        switch(ptype){
            case 1:
                printf("Type 45\n\n");
                type45();//memilih type 45
                break;
            case 2:
                printf("Type 90\n\n");
                type90();//memilih type 90
                break;
            default://kalau salah
                printf("Silahkan Pilih Angka Yang Benar\n");
                getch();system("cls");
                pilihtype();
                break;
        }
    }
}

void struk(){
    system("cls");
    printf("Anda Telah Melakukan Pembelian : \n");
    bio();printf("Pilihan Type Rumah : %s\n", dipilih);
    printf("Silahkan Tekan Apapun Untuk Kembali Ke Menu Utama ");getch();
    system("cls");
    main();
}

void sudahbayar(){
		char bayarr[10],bayarrr[10];
		tab4();printf("==================================================\n");
		tab4();printf("Anda sudah melakukan pembelian\n");
		tab4();printf("Apakah ingin kembali ke menu lagi(ya/no)?\n");
		newmenu++;//untuk memunculkan struk
		tab4();printf("Masukkan Pilihan Anda :");scanf("%s", bayarr);
		if (strcmp(bayarr, "ya") == 0 || strcmp(bayarr, "Ya") == 0 || strcmp(bayarr, "YA") == 0){
			tab4();printf("Anda akan kembali ke Menu Utama Lagi ");getch();
			system("cls");
			main();
		}else if (strcmp(bayarr, "no") == 0 || strcmp(bayarr, "No") == 0 || strcmp(bayarr, "NO") == 0){
			tab4();printf("Apakah Anda Yakin? (ya/no) : ");scanf("%s", bayarrr);
			if( strcmp(bayarrr, "ya") == 0 || strcmp(bayarrr, "Ya") == 0 || strcmp(bayarrr, "YA") == 0){
				system("cls");
				printf("\n\n");
				tab4();printf("Terima Kasih telah menggunakan program kami ");
				printf(" ");
			}else if( strcmp(bayarrr, "no") == 0 || strcmp(bayarrr, "No") == 0 || strcmp(bayarrr, "NO") == 0){
				system("cls");
				sudahbayar();
			}
		}
}

void tab5(){
		printf("\t\t\t\t\t");
	}
	
void tab4(){
		printf("\t\t\t\t");
	}

void tentangmain(){
		menuqu();
	}

void tentangqu(){
		system("cls");
		printf("========================================================================================================================\n\n\n\n\n");
		tab4();printf("====================Tentang Hermang Homestay====================\n\n");
		tab4();printf("1. Type 45\n");
		tab4();printf("\t- Lokasi = JL. Tun Abdul Razak 1 blok F2 no. 56 \n");
		tab4();printf("\t- Nomor yang dapat anda hubungi : 08216798503 (Nabila)\n\n");
		tab4();printf("2. Type 90\n");
		tab4();printf("\t- Lokasi = JL. Tun Abdul Razak 1 blok C3 no 33 \n");
		tab4();printf("\t- Nomor yang dapat anda hubungi : 081254323457 (Wanda)\n\n");
		tab4();printf("================================================================\n");
		tab4();printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
		system("cls");
		menuqu();
	}

void type45(){
		int spek45;
		system("cls");
		tab5();printf("\t\tType 45 \n");
		tab4();printf("====================================================\n");
		tab4();printf("1. Spesifikasi Rumah Type 45\n");
		tab4();printf("2. Harga Rumah Type 45\n");
		tab4();printf("3. Status Rumah Type 45\n");
		tab4();printf("4. Kembali\n");
		tab4();printf("5. Pilih Rumah Type 45\n");
		tab4();printf("====================================================\n");
		tab4();printf("Masukkan Pilihan Anda : ");scanf("%d", &spek45);
		switch(spek45){
			case 1:
			system("cls");
			printf("\n");	
			tab5();printf("Spesifikasi Rumah  Type 45 \n");
			tab4();printf("====================================================\n");
			tab4();printf("Ukuran Tanah : 8 m X 6 m\n");
			tab4();printf("Jumlah Kamar : 2 Kamar Tidur, 1 Kamar Mandi\n ");
			tab4();printf("Spesifikasi lainnya : Carport, dan Taman\n");
			tab4();printf("====================================================\n\n");
			tab4();printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
			system("cls");
			type45();
			break;
			case 2:
			system("cls");
			printf("\n");
			tab5();printf("Harga Rumah Type 45 \n");
			tab4();printf("====================================================\n");
			tab4();printf("Bulanan : Rp. 700.000\n");
			tab4();printf("Tahunan : Rp. 8.000.000\n ");
			tab4();printf("====================================================\n\n");
			tab4();printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
			system("cls");
			type45();
			break;	
			case 3 :
				system("cls");
			tab4();printf("====================================================\n");
			tab4();printf("Status Rumah Type 45 :\n");
			if (status90 == "ready"){
				tab4();printf("Ready");
				printf("\n");
				tab4();printf("====================================================\n");
			}else if ( status90 == "sold"){
				tab4();printf("Sold Out");
				printf("\n");
				tab4();printf("====================================================\n");
			}
			tab4();printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
			system("cls");
			type45();
			break;
			case 4:
			system("cls");
			pilihtype();
			break;
			case 5:
			strcpy(dipilih, "type 45"); 
			system("cls");
			pilihrumahtype45();
			break;
			default :
			tab4();printf("Silahkan Pilih Angka Yang Benar\n");
			getch();system("cls");
			type45();
			
		}
	}



void type90(){
		int spek90;
		system("cls");
		tab5();printf("\t\tType 90 \n");
		tab4();printf("====================================================\n");
		tab4();printf("1. Spesifikasi Rumah Type 90\n");
		tab4();printf("2. Harga Rumah Type 90\n");
		tab4();printf("3. Status Rumah Type 90\n");
		tab4();printf("4. Kembali\n");
		tab4();printf("5. Pilih Rumah Type 90\n");
		tab4();printf("====================================================\n");
		tab4();printf("Masukkan Pilihan Anda : ");scanf("%d",&spek90);
		switch(spek90){
			case 1:
			system("cls");
			printf("\n");
			tab4();printf("Spesifikasi Rumah Type 90 \n");
			tab4();printf("====================================================\n");
			tab4();printf("Ukuran Tanah : 10 m X 9 m\n");
			tab4();printf("Jumlah Kamar : 4 Kamar Tidur, 2 Kamar Mandi\n ");
			tab4();printf("Spesifikasi lainnya : Carport, Rooftop dan Taman\n");
			tab4();printf("====================================================\n");
			tab4();printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
			system("cls");
			type90();
			
			break;
			case 2:
			printf("\n");
			tab4();printf("Harga Rumah Type 90 \n");
			tab4();printf("====================================================\n");
			tab4();printf("Bulanan : Rp. 1.000.000\n");
			tab4();printf("Tahunan : Rp. 10.000.000\n ");
			tab4();printf("====================================================\n");
			tab4();printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
			tab4();system("cls");
			type90();
			break;	
			case 3:
			system("cls");
			tab4();printf("====================================================\n");
			tab4();printf("Status Rumah Type 90 :\n");
			if (status90 == "ready"){
				tab4();printf("Ready");
				printf("\n");
				tab4();printf("====================================================\n");
//				getch();
			}else if ( status90 == "sold"){
				tab4();printf("Sold Out");
				printf("\n");
				tab4();printf("====================================================\n");
//				getch();
			}
			tab4();printf("Kembali Ke Menu?(Silahkan Tekan Apapun)");getch();printf("\n");
			system("cls");
			type90();
			break;
			case 4:
			system("cls");
			pilihtype();
			break;
		    case 5:
	        strcpy(dipilih, "type 90"); 
	        system("cls");
	        pilihrumahtype90();
	        break;
			tab4();printf("Silahkan Pilih Angka Yang Benar\n");
			getch();system("cls");
			type90();
	}
}

