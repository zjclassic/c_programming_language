#include <stdio.h>

main()
{
    double fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    
    printf("cel  fahr\n");
    while (celsius <= upper) {
         fahr= (celsius+32.0) * (9.0/5.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}