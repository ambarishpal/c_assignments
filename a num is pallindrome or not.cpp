#include <stdio.h>

int main() {
    long long number, reversed = 0, original;  
    printf("Enter an integer: ");
    scanf("%lld", &number);  
    original = number;  

    
    if (number < 0) {
        printf("%lld is not a palindrome.\n", number);
        return 0;  
    }

    
    while (number != 0) {
        reversed = reversed * 10 + number % 10;  
        number /= 10;                             
    }

   
    if (original == reversed) {
        printf("%lld is a palindrome.\n", original);
    } else {
        printf("%lld is not a palindrome.\n", original);
    }

    return 0;
}
