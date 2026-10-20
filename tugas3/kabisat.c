#include <stdio.h>

int main () {
    int tahun;
    int bulan;
    char *nama_bulan[13] = {"0", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    int hari[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int kabisat = 0;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);
    printf("Masukkan bulan: ");
    scanf("%d", &bulan);

    if ((tahun % 400 == 0) || (tahun % 100 != 0 && tahun % 4 ==0)) {
        kabisat = 1;
    }

    if (kabisat == 1) {
        if (bulan == 2) {
            hari[2] = 29;
        }
        printf("Tahun %d adalah tahun kabisat\nJumlah hari pada bulan %s adalah %d hari\n", tahun, nama_bulan[bulan], hari[bulan]);
    }
    else {
        printf("Tahun %d bukan tahun kabisat\nJumlah hari pada bulan %s adalah %d hari\n", tahun, nama_bulan[bulan], hari[bulan]);
    }

    return 0;
}
