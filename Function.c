#include<stdio.h>

int Addition(int Value1, int Value2)
{
    int result = 0;
    result = Value1 + Value2;

    return result;
}

int main()
{
    int No1 = 10;
    int No2 = 30;
    int Ans = 0;

    Ans = Addition(No1,No2);

    printf("Addition is %d-good\n",Ans);

    return 0;
}