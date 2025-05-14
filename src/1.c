#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double*** pointer = NULL; double** pp = malloc(sizeof(double*)); *pp = malloc(sizeof(double)); **pp = 2.0; pointer = &pp; printf("%f\n", ***pointer); free(*pp); free(pp);
}