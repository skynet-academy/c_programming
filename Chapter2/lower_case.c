#include <stdio.h>

#define MAX_LENGTH 100

int main(){
    int c;
    for(int i = 0; i < MAX_LENGTH - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        if(c >= 'A' && c <= 'Z')
            printf("%c", c + 'a' - 'A');
        else
            printf("%c", c);
    return 0;
}
