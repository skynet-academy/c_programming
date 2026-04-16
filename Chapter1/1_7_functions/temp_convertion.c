#include <stdio.h>

#define FARENHEIT 'F'
#define CELSIUS 'C'
#define KELVIN 'K'

float convertion(char from, char to, float val);


int main(){
    float lower, upper, m, step;
    lower = m = 0;
    upper = 300;
    step = 10;

    while(m < upper){
        printf("kelvin: %.2f to fahrenheit: %.2f\n", m,convertion('K', 'F', m));
        printf("kelvin: %.2f to celsius: %.2f\n\n", m,convertion('K', 'C', m));
        m += step;
    }

    return 0;
}

float convertion(char from, char to, float val){
    float convertion;
    switch (from) {
        case FARENHEIT: 
            convertion = to == CELSIUS ? (val - 32) * 5/9 : ((val - 32) * 5/9) + 273.15;
        break;
        case CELSIUS: 
            convertion = to == FARENHEIT ? (val * 9/5 ) + 32 : val + 273.15;
        break;
        case KELVIN: 
            convertion = to == CELSIUS ? val - 273.15 : ((val - 273.15) * 9/5) + 32;
        break;
    }
    return convertion;
}
