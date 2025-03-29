#include <stdio.h>
void callByValue(int a) {
    printf("Inside callByValue function:\n");
    printf("Original value of a: %d\n", a);
    a = a + 10; 
    printf("Modified value of a inside callByValue: %d\n", a);
}

void callByReference(int *b) {
    printf("Inside callByReference function:\n");
    printf("Original value of b: %d\n", *b);
    *b = *b + 10; 
    printf("Modified value of b inside callByReference: %d\n", *b);
}

int main() {
    int num1 = 5;
    int num2 = 5;

    printf("Before callByValue:\n");
    printf("Value of num1: %d\n", num1);
    callByValue(num1); 
    printf("After callByValue:\n");
    printf("Value of num1: %d\n", num1); 
    printf("\nBefore callByReference:\n");
    printf("Value of num2: %d\n", num2);
    callByReference(&num2); 
    printf("After callByReference:\n");
    printf("Value of num2: %d\n", num2);

    return 0;
}
