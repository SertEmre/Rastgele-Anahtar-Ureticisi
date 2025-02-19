#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define KEY_SIZE 32

void generate_private_key(unsigned char key[KEY_SIZE]) {
    for (int i = 0; i < KEY_SIZE; i++) {
        key[i] = rand() % 256;
    }
}
// hexadecimal yazdýr
void print_private_key(unsigned char key[KEY_SIZE]) {
    printf("Private Key: ");
    for (int i = 0; i < KEY_SIZE; i++) {
        printf("%02x", key[i]); // Hex formatýnda yazdýr
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    unsigned char private_key[KEY_SIZE];
    generate_private_key(private_key);
    print_private_key(private_key);

    return 0;
}
