#include <stdio.h>

int main() {
    int rollNumbers[] = {10, 20, 30, 40, 50, 60}; 
    int size = sizeof(rollNumbers) / sizeof(rollNumbers[0]); 
    int rollToCheck = 40;  
    int found = 0;  
    for (int i = 0; i < size; i++) {
        if (rollNumbers[i] == rollToCheck) {
            found = 1; 
            break;  
        }
    }

    if (found) {
        printf("Roll number %d is present.\n", rollToCheck);
    } else {
        printf("Roll number %d is not present.\n", rollToCheck);
    }

    return 0;
}
