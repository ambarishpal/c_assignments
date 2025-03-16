#include <stdio.h>

int main() {
    int number;
    char str[12];  
    printf("Enter an integer: ");
    scanf("%d", &number); 
    sprintf(str, "%d", number);
    int lastDigit = lastDigitChar - '0';  
    printf("The last digit of the integer %d is: %d\n", number, lastDigit);

    return 0;
}
