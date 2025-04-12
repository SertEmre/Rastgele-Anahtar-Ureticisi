#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANAHTAR_BOYUTU 32

void ozel_anahtar_uret(unsigned char anahtar[ANAHTAR_BOYUTU]) {
    for (int i = 0; i < ANAHTAR_BOYUTU; i++) {
        anahtar[i] = rand() % 256;
    }
}

// Anahtarı hexadecimal olarak yazdır
void ozel_anahtar_yazdir(unsigned char anahtar[ANAHTAR_BOYUTU]) {
    printf("Özel Anahtar: ");
    for (int i = 0; i < ANAHTAR_BOYUTU; i++) {
        printf("%02x", anahtar[i]); // Hex formatında yazdır
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    unsigned char ozel_anahtar[ANAHTAR_BOYUTU];
    ozel_anahtar_uret(ozel_anahtar);
    ozel_anahtar_yazdir(ozel_anahtar);

    return 0;
}
