#include <stdio.h>

#define MAX_LENGTH 20;

void scape(char s[], char t[]);

int main(){

    return 0;
}

void scape(char s[], char t[]){
    int c, i;
    i = 0;
    while((c = getchar()) != EOF){
        switch (c) {
            case '\n':
                s[i++] = '\\';
                s[i] = 'n';
                break;
            case '\t':
                s[i++] = '\\';
                s[i] = 'n';
                break;
            case '\\':
                s[i] == 'n' ? (s[i++] = 'n'): (s[i++] = 't');
                break;
        }
    }
}
