#include <stdio.h>


void printSquares(int n) {
    
    if (n == 0) {
        return;
    }
    
    printSquares(n - 1);
   
    printf("%d ", n * n);
}

int main() {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
       
        printf("Squares of the first %d natural numbers are:\n", n);
        printSquares(n);
        printf("\n");
    }

    return 0;
}
