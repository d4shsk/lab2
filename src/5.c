#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int* array;

    printf("Enter array size: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));
    printf("Enter %d elements:\n", size);
    for (int* ptr = array; ptr < array + size; ptr++) {
        scanf("%d", ptr);
    }

    printf("Reversed array:\n");
    for (int* ptr = array + size - 1; ptr >= array; ptr--) {
        printf("%d ", *ptr);
    }
    printf("\n");
    free(array);

    return 0;
}