#include <stdio.h>


int main(){
    float farh, celsius, kelvin;
    float lower, upper, step;
    lower = 0;
    upper = 500;
    step = 20;

    kelvin = lower;
    printf("Farenheit\tCelsius\t\tkelvin\n");
    while(farh <= upper){
        farh = ((kelvin - 273.15) * 9/5) + 32;
        celsius = kelvin - 273.15;
        /*
         * when printing we can specify the "width" space in front of the number
         * example: %3.2d   ==> which means that we are going to print 3 digits and two floating points
         */
        printf("%4.2f\t\t%4.2f\t\t%4.2f\n", farh, celsius, kelvin);
        kelvin += step;
    }
}
