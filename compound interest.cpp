#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time, amount, compoundInterest;
    int n; 
    printf("Enter the principal amount: ");
    scanf("%lf", &principal); 
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);  
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);       
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);        
    amount = principal * pow((1 + rate / (n * 100)), n * time);
    compoundInterest = amount - principal;  
    printf("The compound interest is: %.2lf\n", compoundInterest);
    printf("The total amount after %.2lf years is: %.2lf\n", time, amount);

    return 0;
}
