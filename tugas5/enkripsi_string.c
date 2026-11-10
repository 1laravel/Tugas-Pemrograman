#include <stdio.h>

char stringkecil(char huruf) { //fungsi untuk mengubah string menjadi huruf kecil

    if (huruf >= 'A' && huruf <= 'Z') {
        return huruf + 32; 
    }
   return huruf;
}

int stringchecker(char arahinput[], char arahsistem[]) { //pengganti fungsi strcmp
    
    int i = 0;
    while (arahinput[i] != '\0' && arahsistem[i] != '\0') {
        if (arahinput[i] != arahsistem[i]) {
            return 0; 
        }
        i++;
    }
    return (arahinput[i] == '\0' && arahsistem[i] == '\0');
}

void enkripsi_string(char *string, char *arah, int pergeseran) { //fungsi untuk mengenkripsi string
    
    pergeseran = pergeseran % 26;
    int i = 0;
    while (string[i] != '\0') {

        if (string[i] >= 'a' && string[i] <= 'z') {
            if (stringchecker(arah, "kiri")) {
                string[i] = string[i] - pergeseran;
                if (string[i] < 'a') {
                    string[i] = string[i] + 26; 
                }
            } 
            
            
            else if (stringchecker(arah, "kanan")) {
                string[i] = string[i] + pergeseran;
                if (string[i] > 'z') {
                    string[i] = string[i] - 26;
                }
            }
        }
        i++;
    }
    printf("Hasil enkripsi: %s", string);
}


int main () {
    char string[100];
    int pergeseran;
    char arah[10];

    printf("Masukkan sebuah string: ");
    scanf("%[^\n]", string);

    for(int i = 0; string[i] != '\0'; i++) {
        string[i] = stringkecil(string[i]); 
    }

    printf("Besar pergeseran karakter: ");
    do {
        scanf("%d", &pergeseran);
        if (pergeseran <= 0) {
            printf("Masukkan angka pergeseran yang valid: ");
        }
    } while (pergeseran <= 0);
    
    printf("Arah pergeseran: ");
    do {
        scanf("%s", arah);
        for(int i = 0; arah[i] != '\0'; i++) {
            arah[i] = stringkecil(arah[i]); 
        }
        if (stringchecker(arah, "kiri") == 0 && stringchecker(arah, "kanan") == 0) {
            printf("Masukkan arah pergeseran yang valid: ");
        }
    } while (stringchecker(arah, "kiri") == 0 && stringchecker(arah, "kanan") == 0); 

    enkripsi_string(string, arah, pergeseran);
    
    return 0;
}