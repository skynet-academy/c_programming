#include <stdio.h>


int main(){
    char s1[12] = "hllo camm";
    char s2[12] = "wrqttipxv";
    int i, j, index;
    index = i = j = 0;
    while(s1[i] != '\0'){
        if(s2[j] == '\0'){
            j = 0;
            ++i;
        }
        if(s1[i] != s2[j])
            ++j;
        else{
            ++i;
            break;
        }
    }
    if(s1[i] == '\0') index = -1;
    printf("index: %d", index);
}
