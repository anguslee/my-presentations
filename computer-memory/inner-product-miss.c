#include <stdio.h>

#define N 128*1024*1024

static double x[N];
static double y[N];

int main() {
    double sum = 0.0;
    int i;
    for (i = 0; i < N; ++i) {
        sum += x[i] * y[i];
    }

    printf("%lf", sum);
}
