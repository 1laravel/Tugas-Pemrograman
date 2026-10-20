#include <stdio.h>

int main () {
    float sisi1, sisi2, sisi3;

    printf("--- Program penentu jenis segitiga ---\n");
    printf("Masukkan sisi pertama: ");
    scanf("%f", &sisi1);
    printf("Masukkan sisi kedua: ");
    scanf("%f", &sisi2);
    printf("Masukkan sisi ketiga: ");
    scanf("%f", &sisi3);

    if (sisi1 == sisi2 && sisi2 == sisi3) {
        printf("Ini adalah segitiga sama sisi");
    } else if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3) {
        printf("Ini adalah segitiga sama kaki");
    } else {
        printf("Ini adalah segitiga sembarang");
    }

    return 0;
}