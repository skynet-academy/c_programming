#include <stdio.h>


int main(){
    int c;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }

    // same sentence
    // while((c = getchar()) != EOF)
    //     putchar(c);
    // printf("%d", EOF); // its values is -1
}
