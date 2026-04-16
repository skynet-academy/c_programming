#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){
    int total_bits_int = sizeof(int) * CHAR_BIT;
    int total_bits_short = sizeof(signed short) * CHAR_BIT;
    int total_bits_unsigned_short = sizeof(unsigned short) * CHAR_BIT;
    int total_bits_float = sizeof(float) * CHAR_BIT;
    int signed_min = -(1<<(CHAR_BIT -1));
    int signed_max = (1<<(CHAR_BIT -1)) - 1;
    int unsigned_max = (1<<CHAR_BIT) - 1;
    unsigned short x = 0;
    printf("===============================================================\n");
    printf("char size in bytes: %lu\n", sizeof(char));
    printf("===============================================================\n");
    printf("total bits in an int: %d\n", total_bits_int);
    printf("total bits in an short: %d\n", total_bits_short);
    printf("int in bytes: %lu\n", sizeof(int));
    printf("int max val: %d\n", (1 << (total_bits_int - 1))- 1);
    printf("int min val: %d\n", -(1U << (total_bits_int - 1)));
    printf("signed short int max: %d\n", (1 << ((total_bits_short - 1))) - 1);
    printf("signed short int min: %d\n", -(1U << (total_bits_short - 1)));

    printf("unsigned short int min: %d\n", ~(x - 1));
    printf("unsigned short int max: %d\n", (1 << total_bits_unsigned_short) - 1);
    printf("long int in bytes: %lu\n", sizeof(long int));
    printf("long long int in bytes: %lu\n", sizeof(long long int));
    printf("unsigned long long int in bytes: %lu\n", sizeof(unsigned long long int));
    printf("===============================================================\n");
    printf("float in bytes: %lu\n", sizeof(float));
    printf("Double in bytes: %lu\n", sizeof(double));
    printf("long double in bytes: %lu\n", sizeof(long double));



    return 0;
}
