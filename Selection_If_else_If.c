#include<stdio.h>
int main()
{
    int std = 0;
    printf("Enter your standerd\n");

    scanf("%d",&std);

    if(std == 1)
    {
        printf("9:30 PM");
    }
    else if(std == 2)
    {
        printf("10:30 PM");
    }
    else if(std == 3)
    {
        printf("11:30 PM");
    }
    else
    {
        printf("INVALID");
    }

    return 0;
    
}