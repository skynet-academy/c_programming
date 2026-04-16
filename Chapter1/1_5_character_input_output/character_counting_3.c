#include <stdio.h>


int main(){
    int c;
    int nl = 0;
    int tabs = 0;
    int spaces = 0;
    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
        else if(c == '\t')
            ++tabs;
        else if(c == ' ')
            ++spaces;
    }
    printf("new lines:%d\ntabs:%d\nspaces:%d", nl, tabs, spaces);
}
