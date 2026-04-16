#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 2   /* outside a word */

int main(){
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
        ++nc;
    }
    printf("New lines:%d\nNew words:%d\nCharacters:%d\n", nl, nw, nc);
}
