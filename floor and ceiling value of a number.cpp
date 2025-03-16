#include <stdio.h>
#include <math.h>  

int main() {
    double number, floorValue, ceilingValue;
    printf("Enter a number: ");
    scanf("%lf", &number);  
    floorValue = floor(number);
    ceilingValue = ceil(number);
    printf("The floor value of %.2lf is: %.2lf\n", number, floorValue);
    printf("The ceiling value of %.2lf is: %.2lf\n", number, ceilingValue);

    return 0;
}
