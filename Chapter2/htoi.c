#include <stdio.h>


int hex_to_int(char s[]);

int main(){
    char x[] = "FFF";
    char y[] = "0xFFF";
    printf("hex:%s in int: %d\n",x , hex_to_int(x));
    printf("hex:%s in int: %d",y , hex_to_int(y));
    return 0;
}


int hex_to_int(char s[]){
    int n, i = 0, result = 0;
    if(s[0] == '0' && (s[1] == 'X' || s[1] == 'x'))
        i += 2;
    while(s[i] != '\0'){

        if(s[i] >= '0' && s[i] <= '9')
            n = s[i] - '0';
        else if(s[i] >= 'A' && s[i] <= 'F')
            n = s[i] - 'A' + 10;
        else if(s[i] >= 'a' && s[i] <= 'f')
            n = s[i] - 'a' + 10;
        else
            break;
        result = (result << 4) | n;
        ++i;
    }
    return result;
}
