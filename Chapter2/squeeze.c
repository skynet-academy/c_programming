#include <stdio.h>

#define  MAX_LENGTH 20

int main(){
    int i, j, c;
    char s[MAX_LENGTH];
    for(i = j = 0; MAX_LENGTH - 1 && (c = getchar()) != EOF && s[i] != '\0'; i++)
        if(s[j] != c)
            s[j++] = s[i];
    s[j] = '\0';
    printf("%s", s);
    return 0;
}
