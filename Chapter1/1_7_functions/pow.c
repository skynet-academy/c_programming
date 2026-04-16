#include <stdio.h>

int power(int base, int n);

int main(){

    for(int i = 0; i < 10; ++i)
        printf("2^%d: %d\n3^%d: %d\n\n", i, power(2, i), i, power(3, i));
}

int power(int base, int n){
    int p = 1;
    if(n == 0) return 1;
    for(int i = 0; i < n; ++i)
        p *= base;
    return p;
}
