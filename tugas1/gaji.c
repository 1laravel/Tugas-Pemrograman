#include <stdio.h>

int main () {
    char nama[50], jabatan[50];
    int gaji_kotor;
    float pajak = 0.07, zakat = 0.025;

    printf("--- Program ngitung gaji bersih ---\n");
    printf("Nama Lengkap: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Jabatan: ");
    fgets(jabatan, sizeof(jabatan), stdin);
    printf("Gaji bulanan: ");
    scanf("%d", &gaji_kotor);

    printf("--- Hasil Perhitungan ---\n");
    printf("Nama Karyawan: %sJabatan: %sGaji bulanan: %d\n", nama, jabatan, gaji_kotor);

    int bayar_pajak = gaji_kotor * pajak;
    int bayar_zakat = gaji_kotor * zakat;
    int gaji_bersih = gaji_kotor - (bayar_pajak + bayar_zakat);
    
    printf("Total Pajak: %d\nTotal Zakat: %d\nTotal Gaji bersih: %d\n", bayar_pajak, bayar_zakat, gaji_bersih);
    return 0;
}
