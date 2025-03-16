#include <stdio.h>

int main() {
    long long number;  
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%lld", &number);  
    
    if (number < 0) {
        number = -number;  
    }
    while (number != 0) {
        sum += number % 10;  
        number /= 10;        
    }
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
