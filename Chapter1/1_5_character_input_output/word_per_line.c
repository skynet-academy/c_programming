#include <stdio.h>

#define MAX_SPACE 1

int main(){
    int c;
    int max_spc = MAX_SPACE;
    while((c = getchar()) != EOF){
        if(c == ' '){
            ++max_spc;
            if(max_spc <= 1)
                printf("\n");
        } else{
            putchar(c);
            max_spc = 0;
        }
    }
}
