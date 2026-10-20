#include <stdio.h>

int main () {
    float totalbelanja;
    float diskon;

    printf("--- Program penghitung diskon ---\n");
    printf("Masukkan total belanja anda: ");
    scanf("%f", &totalbelanja);
    printf("---- Struk Belanja ----\n");

    if (totalbelanja >= 2000000) {
        diskon = totalbelanja - (totalbelanja * 0.25) - 100000;
        printf("Total belanja anda sebelum diskon: %.0f\n", totalbelanja);
        printf("Total belanja anda setelah diskon: %.0f\n", diskon);
    } else if (totalbelanja >= 1000000) {
        diskon = totalbelanja - (totalbelanja * 0.25);
        printf("Total belanja anda sebelum diskon: %.0f\n", totalbelanja);
        printf("Total belanja anda setelah diskon: %.0f\n", diskon);
    } else if (totalbelanja >= 500000) {
        diskon = totalbelanja - (totalbelanja * 0.2);
        printf("Total belanja anda sebelum diskon: %.0f\n", totalbelanja);
        printf("Total belanja anda setelah diskon: %.0f\n", diskon);
    } else if (totalbelanja >= 100000) {
        diskon = totalbelanja - (totalbelanja * 0.1);
        printf("Total belanja anda sebelum diskon: %.0f\n", totalbelanja);
        printf("Total belanja anda setelah diskon: %.0f\n", diskon);     
    } else {
        printf("Total belanja anda adalah: %.0f\nBelanja lebih banyak untuk mendapatkan diskon\n", totalbelanja);
    }

    return 0;

}