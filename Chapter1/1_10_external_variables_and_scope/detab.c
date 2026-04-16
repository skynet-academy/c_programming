#include <stdio.h>

#define MAX_LENGTH 80
#define TAB_TO_SPACE 4
#define MAX_TABS 6

int getLine(char s[]);
void tabToSpace(char s[], int index);

int main(){
    int len, i;
    char line[MAX_LENGTH];

    if((len = getLine(line)) > 0){
        printf("\n");
        for(i = 0; i < len; ++i)
            printf("%c", line[i]);
    }

    return 0;
}


void tabToSpace(char s[], int index){
    int i = TAB_TO_SPACE;
    while(i > 0){
        s[index + 1] = 's';
        --i;
    }
}

int getLine(char s[]){
    int i, c;
    for(i = 0; i < MAX_LENGTH - 1 && c != '\n' && (c = getchar()) != EOF; ++i){
        if(c == '\t'){
            tabToSpace(s, i);
            i+= TAB_TO_SPACE;
        }
        else
            s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
