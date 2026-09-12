#include<stdio.h>

    int Value1 =10;
    int Value2 =20;
    int Ans = 0;      // memory - data section   ----- stack ,text

int main()
    
{  
   //stack local
    Ans = Value1 + Value2;

    printf("%d\n",Ans);
    
    return 0;
}

