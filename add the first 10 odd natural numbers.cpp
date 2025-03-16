#include <stdio.h>

int main() {
    int count = 0;  
    int number = 1; 

    printf("The first ten odd numbers are:\n");

    while (count < 10) {
        printf("%d\n", number);
        number += 2;            
        count++;                
    }

    return 0;
}
