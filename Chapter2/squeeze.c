#include <stdio.h>


int main(){
    int i, j, c;
    char s[10];
    for(i = j = 0; (c = getchar()) != EOF && s[i] != '\0'; i++)
        if(s[j] != c)
            s[j++] = s[i];
    s[j] = '\0';
    printf("%s", s);
    return 0;
}
