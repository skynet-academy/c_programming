#include <stdio.h>

int bitcount(unsigned x);

int main(){
    int x = 16;
    printf("x: %d", bitcount(x));
}

int bitcount(unsigned x){
    int b;
    for(b = 0; x != 0; x >>= 1)
        if(x & 01)
            b++;
    return b;
}
