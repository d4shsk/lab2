#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    double* array;

    printf("Enter array size: ");
    scanf("%d", &size);

    array = (double*)malloc(size * sizeof(double));
    printf("Enter %d elements:\n", size);
    for (double* ptr = array; ptr < array + size; ptr++) {
        scanf("%lf", ptr);
    }
    printf("Elements:\n");
    for (double* ptr = array; ptr < array + size; ptr++) {
        printf("%.2f ", *ptr);
    }
    printf("\n");
    free(array);

    return 0;
}