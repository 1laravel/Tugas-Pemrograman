#include <stdio.h>

int main() {
    char teks[255];
    int awal_kata = 1;

    printf("Masukkan sebuah string:\n");
    scanf(" %[^\n]", teks);

    int i = 0;
    while (teks[i] != '\0') { // mengecek char 1 per 1 sampai bernilai null atau habis atau ditulis \0
        if (teks[i] == ' ') { 
            awal_kata = 1; // membuat status true jika bertemu spasi 
        } 
        else {
            if (awal_kata == 1) { // Jika nilau true dan huruf awalnya kecil akan diubah ke huruf kapital
                if (teks[i] >= 'a' && teks[i] <= 'z') {
                    teks[i] = teks[i] - 32;
                }
                awal_kata = 0; // Mengubah nilai menjadi false supaya teks berikutnya menjadi huruf kecil 
            } 
            else {
                if (teks[i] >= 'A' && teks[i] <= 'Z') { // Memastikan isi teks huruf kecil semua jika bernilai false
                    teks[i] = teks[i] + 32;
                }
            }
        }
        i++;
    }

    printf("Hasil title case: %s\n", teks);

    return 0;
}