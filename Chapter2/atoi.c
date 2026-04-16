#include <stdio.h>

int atoi(char s[]);

int main(){
    int i, n = 0;
    atoi("0123456789");
    return 0;
}

int atoi(char s[]){
    int i;
    int n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i){
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
