#include "data_io.h"

int input(double **a, int *n) {
    if (scanf("%d", n) == 0) {
        return 0;
    }
    *a = (double *)calloc(*n, sizeof(double));

    for (double *p = *a; p - *a < *n; p++) {
        if (scanf("%lf", p) == 0) {
            free(a);
            return 0;
        }
    }

    return 1;
}

void output(double *a, int n) {
    printf("%.2f", *a);
    for (double *p = a + 1; p - a < n; p++) {
        printf(" %.2f", *p);
    }
    free(a);
}