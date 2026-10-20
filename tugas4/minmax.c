#include <stdio.h>  //Muhammad Aufa Zaki
                    //260810701100046
int main() {
    int n;

    do { printf("Jumlah data : ");
        scanf("%d", &n);
        
        if (n <= 0 || n > 80) { //Cek nilai n apakah sudah sesuai atau belum
            printf("Nilai data salah\nMasukkan kembali jumlah data antara 1-80\n");
        }
    } 
    while (n <= 0 || n > 80);

    float data[80];
    float sum = 0;

    for (int i = 0; i < n; i++) { //Memasukkan nilai kedalam var data
        printf("Data ke %d: ", i + 1);
        scanf("%f", &data[i]);
        sum += data[i]; //menjumlahkan semua var data ke dalam var sum
    }
    float min, max;

    min = data[0];
    max = data[0];

    for (int i = 1; i < n; i++) {
        if (data[i] < min) { //membandingkan nilai min dan max untuk mendapatkan nilai terkecil dan tertinggi
            min = data[i];
        }
        if (data[i] > max) {
            max = data[i];
        }
    }

    float rata_rata;
    rata_rata = sum / n; //membagi nilai sum dengan n untuk mendapatkan rata rata

    printf("\nNilai minimum: %g\n", min);
    printf("Nilai maksimum: %g\n", max);
    printf("Nilai rata-rata: %g\n", rata_rata);

    return 0;
}