#include <stdio.h>


int fibonacci(int n) {
    
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void printFibonacciSeries(int terms) {
    printf("Fibonacci series up to %d terms:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

   
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

   
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
       
        printFibonacciSeries(n);
    }

    return 0;
}
