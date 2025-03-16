#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
   
    srand(time(0));
    int toss = rand() % 2;  
    if (toss == 0) {
        printf("The result of the coin toss is: Heads\n");
    } else {
        printf("The result of the coin toss is: Tails\n");
    }

    return 0;
}
