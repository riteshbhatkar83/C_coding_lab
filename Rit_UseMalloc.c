#include <stdio.h>
#include <stdlib.h> // needed for malloc

int main()
{
    int *p; // pointer

// allocate memory for 1 integer
    p =  (int*) malloc(sizeof(int));

// assign value
    *p = 10;

    printf("Value =%d\n",*p);
    printf("Address =%p\n",p);

    free(p);

    return 0;
}


// Value =10
// Address =00C115A0