#include <stdio.h>

int main() {
    char teks[255];
    int panjang = 0;

    printf("Masukkan sebuah kalimat: ");
    scanf("%[^\n]", teks);

    while (teks[panjang] != '\0') { //Mengecek semua isi char 1 per 1 sampai habis atau null tau ditulis \0
        if (teks[panjang] >= 'A' && teks[panjang] <= 'Z') { //Kalau ada huruf besar diubah dulu ke huruf kecil pake ascii
            teks[panjang] = teks[panjang] + 32;
        }
        panjang++;
    }

    printf("Menjadi: ");

    for (int i = panjang - 1; i >= 0; i--) { //Pakai perulangan untuk cetak output dari paling belakang ke yang paling depan
        printf("%c", teks[i]);
    }

    return 0;

}