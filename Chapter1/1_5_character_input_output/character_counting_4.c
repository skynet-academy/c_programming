#include <stdio.h>


int main(){
    int c;
    int count = 0;
    int max_spaces = 1;
    while((c = getchar())!= EOF){
        if(c == ' '){
            count >= max_spaces ? : putchar(c);
            ++count;
        } else {
            putchar(c);
            count = 0;
        }
    }
}
