#include <stdio.h>

#define LIMIT 20

int main(){
    int i = 0, c;
    char line[LIMIT];
    while(i < LIMIT){
        if((c = getchar()) == '\n')
            break;
        else if(c == EOF)
            break;
        line[i] = c;
        ++i;
    }
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    printf("\n%d\n",i);
    for(int j = 0; j < i + 1; ++j)
        printf("%c", line[j]);
    return 0;
}
