#include <stdio.h>

#define MAX_LENGTH 20

void squeeze_delete(char s[], char t[]);
void shift(char s[], int index);

int main(){
    int i, c;
    char s[MAX_LENGTH];
    char t[MAX_LENGTH];
    for(i = 0; i < MAX_LENGTH - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    for(i = 0; i < MAX_LENGTH - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        t[i] = c;
    squeeze_delete(s, t);

    printf("Final string: %s",s);

    return 0;
}

void shift(char s[], int index){
    int i = index;
    while((s[i] = s[i + 1]) != '\0')
        ++i;
}

void squeeze_delete(char s[], char t[]){
    int i, j;
    i = 0;
    while(s[i] != '\0'){
        j = 0;
        while(t[j] != '\0'){
            if(s[i] == t[j])
                shift(s, i);
            else
                ++j;
        }
        ++i;
    }
    s[i] = '\0';
}
