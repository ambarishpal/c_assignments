#include <stdio.h>

int main() {
    long long number;  
    long long reverse = 0;  
    printf("Enter an integer: ");
    scanf("%lld", &number);  
    long long original = number;  
    if (number < 0) {
        number = -number;  
    }

    
    while (number != 0) {
        reverse = reverse * 10 + number % 10;  
        number /= 10;                            
    }


    if (original < 0) {
        reverse = -reverse;
    }

    printf("The reverse of the number is: %lld\n", reverse);

    return 0;
}
