#include <stdio.h>

int power(int base, int n);

int main(){
    for(int i = 0; i < 10; ++i)
        printf("%d %d:\n",i, power(i, i) );
    return 0;
}
int power(int base, int n){
    int p;
    if(base == 0) return 0;
    if(n == 0) return 0;
    for(p = 1; n > 0; --n)
        p *= base;
    return p;
}
