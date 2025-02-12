#include "data_stat.h"

double max(double *a, int n) {
    double mx = *a;
    for (int i = 0; i < n; i++) {
        if (a[i] > mx) {
            mx = a[i];
        }
    }
    return mx;
}

double min(double *a, int n) {
    double mi = *a;
    for (int i = 0; i < n; i++) {
        if (a[i] < mi) {
            mi = a[i];
        }
    }

    return mi;
}
double mean(double *a, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
double variance(double *a, int n) {
    double sumk = 0;
    double sum = mean(a, n);
    for (int i = 0; i < n; i++) {
        sumk += ((a[i] - sum) * (a[i] - sum));
    }
    sumk /= n;
    return sumk;
}
