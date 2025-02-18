#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0,20,...,300 int */

main() {
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;  /*  lower limit of temperature scale  */
    upper = 300;  /*  upper limit  */
    step = 20;    /*  step size */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32)  / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}


#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0,20,...,300  float*/

main() {
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;  /*  lower limit of temperature scale  */
    upper = 300;  /*  upper limit  */
    step = 20;    /*  step size */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.lf\n", fahr, celsius);
        fahr = fahr + step;
    }
}


#include <stdio.h>

#define UPPER 300
#define LOWER 0 
#define STEP 20

/* print Fahrenheit-Celsius table for fahr = 0,20,...,300 for loop*/

main() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.lf\n",fahr, (5.0/9.0) * (fahr-32));
    }
}
