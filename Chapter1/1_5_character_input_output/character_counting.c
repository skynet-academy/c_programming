#include <stdio.h>


int main(){
    // long nc;
    // nc = 0;
    // printf("%ld",sizeof(long));
    // while(getchar() != EOF){
    //     ++nc;
    //     printf("%ld\n", nc);
    // }
    double nc;
    for(nc = 0; getchar() != EOF; ++nc)
        printf("%.1f\n", nc);
}
