#include <stdio.h>

#define  MAX_LENGTH 100

int main(){

    int c, i;
    for(i = 0; i < MAX_LENGTH - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        printf("%c", c >= 'A' && c <= 'Z' ? c + 'a' - 'A': c);
    return 0;
}
