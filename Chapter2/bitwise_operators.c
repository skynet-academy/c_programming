#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main() {
    int x = 10;
    printf("%u",getbits(x, 4, 3));
    return 0;
}


unsigned getbits(unsigned x, int p, int n){
    return (x >> (p + 1 -n)) & ~(~0 << n);
}
