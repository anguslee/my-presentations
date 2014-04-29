#include <stdio.h>

int main() {
    long a = 35;
    long* p = &a;
    long pa = (long)p;
    printf("0x%lx\n", pa);
    printf("%ld\n", *((long*)pa));
}
