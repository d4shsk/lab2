#include <stdio.h>

int main() {
    int a = 13;
    int b = 24;
    int* ptr1 = &a, * ptr2 = &b;
    int max = (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
    printf("Max: %d\n", max);

    return 0;
}