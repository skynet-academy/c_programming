#include <stdio.h>

#define MAXLINE 10000
#define MINLENGTH 80

int getLength(char s[], int lim);

int main(){
    char line[MAXLINE];

    int len;
    while((len = getLength(line, MAXLINE)) > 0){
        if(len > MINLENGTH)
            printf("The line has a length of:%d\n", len);
        else
            printf("The line has a length of:%d\n", len);
    }
    return 0;
}

int getLength(char s[], int lim){
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

