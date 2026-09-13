#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i ;
    float f;
    double d;

};

int main()
{
    printf("%d\n",sizeof(struct Demo));  //size will predict without object creation


    return 0;
}