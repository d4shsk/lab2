#include <stdio.h>

int main() {
    int num1 = 2;
    int num2 = 88;
    int* ptr1 = &num1, *ptr2 = &num2;
    int sum;
    sum = *ptr1 + *ptr2;

    printf("Sum: %d\n", sum);

    return 0;
}