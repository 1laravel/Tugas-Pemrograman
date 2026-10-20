#include <stdio.h>

int main () {

    float tinggi;
    float diameter;

    printf("--- Progam penghitung luas dan volume tabung ---\n");
    printf("Masukkan tinggi tabung: ");
    scanf("%f", &tinggi);
    printf("Masukkan diameter tabung: ");
    scanf("%f", &diameter);

    float jari = diameter/2;
    float jari_kuadrat = jari * jari;
    float phi = 3.14;

    printf("---- Hasil pencariannya ----\n");

    float luas = 2 * phi * jari *(jari + tinggi);   //Rumus luas tabung
    printf("Luas tabung adalah: %.2f\n", luas);     //L= 2 x Phi x r x (r + t)

    float volume = phi * jari_kuadrat * tinggi;     //Rumus Volume // V = Phi x r^2 x tinggi
    printf("Volume tabung adalah: %.2f\n----------------------------\n", volume);
    
    return 0;



}