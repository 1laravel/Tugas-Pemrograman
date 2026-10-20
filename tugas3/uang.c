#include <stdio.h>

int main () {
    int mata_uang [14] = {500000, 100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 100, 50, 10, 5, 1};
    int uang;

    printf("Masukkan jumlah uang: ");
    scanf("%d", &uang);

    printf("-------------------------\n");
    printf(" Pecahan          Jumlah\n");
    printf("-------------------------\n");

    for (int i = 0; i < 14; i++) {
        int lembar_uang = uang / mata_uang[i];

        uang = uang % mata_uang[i];
    printf("%8d %13d\n", mata_uang[i], lembar_uang);
    
    }
    printf("-------------------------\n");
}