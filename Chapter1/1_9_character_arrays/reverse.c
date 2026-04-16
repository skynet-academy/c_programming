#include<stdio.h>

#define MAX_LENGTH 80
int reverse(char s[], int max);

int main(){
    int len;
    char line[MAX_LENGTH];

    while((len = reverse(line, MAX_LENGTH)) > 0){
        printf("length: %d\n", len);
        printf("reversed: %s\n", line);
    }
    return 0;
}

int reverse(char s[], int max){
    int c, i, j;
    i = j = 0;

    for(;i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    int idx = i / 2;
    while(idx > 0){
        char temp;
        temp = s[i - j - 1];
        s[i - j - 1] = s[j];
        s[j] = temp;
        ++j;
        --idx;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
