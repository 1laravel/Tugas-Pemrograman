#include <stdio.h>          //Muhammad Aufa Zaki
                            //260810701100046

char replace_string(char *string, char find, char replace) {
    int i = 0;
    while (string[i] != '\0') {  
        if (string[i] == find) {      
            string[i] = replace;    //Mengganti karakter jika syarat if terpenuhi
        }
        i++;
    }
    return *string;  //mengembalikan string yang sudah diganti
}


int main () {
    char string[100];      //Deklarasi variabel
    char tujuan, pengganti;

    printf("Masukkan sebuah string: ");  
    scanf("%[^\n]", string);
    printf("Karakter yang dicari: "); 
    scanf(" %c", &tujuan);
    printf("Karakter pengganti: "); 
    scanf(" %c", &pengganti);

    replace_string(string, tujuan, pengganti); //memanggil fungsi

    printf("\nString hasil substitusi: %s", string); //output
    
    return 0;
}