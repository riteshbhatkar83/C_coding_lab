#include<stdio.h>

struct Demo
{
    int i;
    float f;
    double d;

};

int main()
{
    printf("%d",sizeof(struct Demo));

    return 0;
}