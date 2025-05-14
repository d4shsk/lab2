#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int** array;

    printf("Cols: ");
    scanf("%d", &rows);
    printf("Rows: ");
    scanf("%d", &cols);

    array = (int**)malloc(rows * sizeof(int*));

    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(cols * sizeof(int));
    }

    printf("Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i * cols + j;
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}