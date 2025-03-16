#include <stdio.h>

int main()
 {
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);  
    printf("Enter the second number: ");
    scanf("%f", &num2);  
    result = num1 - num2;

    printf("The result of %.2f - %.2f = %.2f\n", num1, num2, result);

    return 0;
}
