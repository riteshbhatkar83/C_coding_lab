#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *p;
    int i;

    // allocate memory for 5 integers
    p = (int*) calloc(5, sizeof(int));

    // print values
    for(i = 0; i < 5; i++) {
        printf("Value at index %d = %d\n", i, p[i]);
    }

    // free memory
    free(p);

    return 0;
}

// Value at index 0 = 0
// Value at index 1 = 0
// Value at index 2 = 0
// Value at index 3 = 0
// Value at index 4 = 0