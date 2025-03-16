#include <stdio.h>

int main() {
    long long number;  
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &number); 
    if (number == 0) {
        count = 1; 
    } else {
        
        if (number < 0) {
            number = -number;  
        }
        while (number != 0) {
            number /= 10;  
            count++;       
        }
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}
