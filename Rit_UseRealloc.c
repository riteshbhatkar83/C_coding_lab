#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p, i;

    // Step 1: allocate memory for 3 integers
    p = (int*) malloc(3 * sizeof(int));

    // assign values
    for(i = 0; i < 3; i++) {
        p[i] = i + 1;
    }

    printf("Before realloc:\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", p[i]);
    }

    // Step 2: increase size to 5 integers
    p = (int*) realloc(p, 5 * sizeof(int));

    // assign new values
    for(i = 3; i < 5; i++) {
        p[i] = i + 1;
    }

    printf("\nAfter realloc:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    // free memory
    free(p);

    return 0;
}

// 🔸 Output
// Before realloc:
// 1 2 3

// After realloc:
// 1 2 3 4 5