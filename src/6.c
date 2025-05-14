#include <stdio.h>

int main(void) {
    int a = 1234567890;
    char* ptr = (char*)&a;
    for (int i = 0; i < sizeof(int); i++) {
        printf("Byte %d: %d\n", i, (unsigned char)ptr[i]);
    }
    return 0;
}