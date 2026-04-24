#include <stdio.h>

unsigned bitcounter(unsigned x);

int main(){
    for(int i = 0; i <= 16; ++i)
        printf("number of bits for %d is: %d\n", i, bitcounter(i));
    return 0;
}

unsigned bitcounter(unsigned x){
    int b;
    for(b = 0; x != 0; x >>= 1){
        x &= (x - 1);
        b += 1;
    }
    return b;
}
