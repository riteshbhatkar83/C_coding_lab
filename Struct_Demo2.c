#include<stdio.h>

struct Demo        //-> global type defination
{
    int i;
    char ch;
    float f;

};

int main()
{
    printf("%d",sizeof(struct Demo));

    return 0;
}