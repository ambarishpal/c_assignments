#include <stdio.h>

int binomialCoefficient(int n, int k) {
    
    if (k == 0 || k == n) {
        return 1;
    }
    
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

void printBinomialSeries(int n) {
    printf("Binomial coefficients for n = %d:\n", n);
    for (int k = 0; k <= n; k++) {
        printf("C(%d, %d) = %d\n", n, k, binomialCoefficient(n, k));
    }
}

int main() {
    int n;

    
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

   
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
       
        printBinomialSeries(n);
    }

    return 0;
}
