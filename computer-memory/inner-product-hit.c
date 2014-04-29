#include <stdio.h>

#define N 128*1024*1024

typedef struct {
    double x;
    double y;
} point;

point array[N];

int main() {
    double sum = 0.0;
    int i;
    for (i = 0; i < N; ++i) {
        sum += array[i].x * array[i].y;
    }

    printf("%lf", sum);
}
