#include<stdio.h>

int main()
{
    int std = 0;
    printf("Enter your Standard\n");
    scanf("%d",&std);

    switch(std)
    {
        case 1 :
            printf("9:30");
            break;
        case 2 :
            printf("10:30");
            break;
        case 3 :
            printf("11:30");
            break;
        default:
            printf("INVALID");

    }
    return 0;
}