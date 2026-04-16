#include <stdio.h>

#define VTAB '\013'
#define BELL '\007'
#define ONETHREEOCT '\ooo'
#define ONETHREE '\xhh'


enum escapes {BELL_EN = '\a', BACKSPACE = '\b', TAB = '\t'};

int main(){
    enum escapes a = BELL_EN;
    char emoji[] = "🚀";
    printf("%s\n", emoji);
    printf("bell character:%c\n",BELL);
    printf("vertical tab:%c\n", VTAB);
    printf("new line:%c\n", '\n');
    printf("aler bell:%c\n", '\a');
    printf("Form feed:%c\n", '\'');
    printf("Carriage return:%c\n", '\r');
    printf("Horizontal tab:%c\n", '\t');
    printf("Vertical tab:%c\n", '\v');
    printf("backslash:%c\n", '\\');
    printf("Question mark:%c\n", '\?');
    printf("Single quote:%c\n", '\'');
    printf("Double quote:%c\n", '\"');
    printf("hello" " world");
    printf("/\n");
    printf("a: %c", a);
    return 0;
}
