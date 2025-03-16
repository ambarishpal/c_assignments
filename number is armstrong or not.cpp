#include <stdio.h>
#include <math.h>

int main() {
    int number, original, remainder, count = 0;
    long long sum = 0;  
    printf("Enter an integer: ");
    scanf("%d", &number); 

    original = number;  
    while (original != 0) {
        original /= 10; 
        count++;         
    }

    original = number;  
    while (number != 0) {
        remainder = number % 10;  
        sum += pow(remainder, count);  
        number /= 10; 
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
