#include <stdio.h>

int main()
{
   int array[]={12,2,3,4,5,6,27,8,9,10,11,11,13,14,15,16,17,18,19,20,21,22,23,24,25};
   int alamat,flag,i, cari;
   int size=sizeof(array)/sizeof(array[0]);
    printf("Masukkan Angka yang dicari : ");
    scanf("%d", &cari);
    for (i=0;i<size;i++)
    {
        if(array[i]==cari)
        {
            flag=1;
            alamat=i;
        }
    }
    if(flag==1){
    printf("Angka %d ditemukan di indeks ke-%d", cari, alamat );
    }
    else
    {
        printf("Angka %d tidak ditemukan ",cari);
    }
    return 0;
}