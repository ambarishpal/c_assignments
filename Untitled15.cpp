#include <stdio.h>

int main() {
    int i;
    printf("Number\tSquare\n");
    printf("---------------\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\t%d\n", i, i * i); 
    }

    return 0;
}
