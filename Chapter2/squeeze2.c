#include <stdio.h>

#define  MAX_LENGTH 20

void strCat(char s[], char t[]);

int main(){
    int c;
    int i = 0;
    int j = 0;
    char s[MAX_LENGTH];
    char t[MAX_LENGTH];
    printf("Get the first string\n");
    while((c = getchar()) != EOF && c != '\n')
        s[i++] = c;
   
    printf("\nGet the second string\n");
    while((c = getchar()) != EOF && c != '\n')
        t[j++] = c;
    
    strCat(s, t);
    printf("Final string:%s", s);


    return 0;
}

void strCat(char s[], char t[]){
    int i, j;
    i = j = 0;
    while(s[i] != '\0') /* finding end of s */
        ++i;
    while((s[i++] = t[j++]) != '\0') /* copying t */
        ;
}
