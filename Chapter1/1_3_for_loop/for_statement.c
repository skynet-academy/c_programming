#include <stdio.h>

int main(){ 
    int fahr;

    // increase order
    printf("Farenheit\tCelsius\n");
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d\t\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

    printf("\n\n");
    //
    printf("Farenheit\tCelsius\n");
    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d\t\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
