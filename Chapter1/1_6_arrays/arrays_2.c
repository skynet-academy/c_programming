#include <stdio.h>

#define MAX_WORDS 10
#define IN 1
#define OUT 2

int main(){
    int c, state, idx, nw;
    int words[MAX_WORDS];
    nw = idx = 0;
    state = OUT;
    printf("Enter max 10 words\n");
    for(int i = 0; i < MAX_WORDS; ++i){
        words[i] = 0;
    } 
    while((c = getchar()) != EOF){
        if(c == '\t' || c == ' ' || c == '\b' || c == '\n'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
            ++idx;
        } 
        if(state == IN){
            ++words[idx - 1];
        }
    }

    printf("\n");
    for(int i = 0; i < MAX_WORDS; ++i){
        printf("%d", words[i]);
    }
    printf("\n");

    for(int i = 0; i < MAX_WORDS; ++i){
        printf("(%3.d) - |", i + 1);
        for(int j = 0;  j < 10; ++j){
            int x = MAX_WORDS - words[j];
            // int y = 0;
            if(i < x)
                printf("ooo");
            else
                printf("|*|");
        }
        printf("\n");
    }
}
