#include <stdio.h>

#define IN 1 
#define  OUT 2
#define  MAXLENGTH 1000
#define MAX_SPACES 1

int removeBlank(char s[],int lim);

int main(){
    int len;
    char s[MAXLENGTH];
    while((len = removeBlank(s, MAXLENGTH)) > 0){
        printf("Without spaces :");
        for(int i = 0; i < len; ++i)
            printf("%c", s[i]);
    }

    return 0;
}

int removeBlank(char s[],int lim){
    int c, i, max;
    i = max = 0;
    int state = OUT;
    while(i < lim - 1 && (c = getchar()) != EOF && c != '\n'){
        if(c == ' ' || c == '\t'){
            state = OUT;
            if(max < MAX_SPACES){
                s[i] = c;
                ++i;
                ++max;
            }
        }
        else if(state == OUT)
            state = IN;
        if(state == IN){
            s[i] = c;
            ++i;
            max = 0;
        }
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
