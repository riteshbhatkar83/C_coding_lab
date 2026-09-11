#include<stdio.h>

int main()
{
 int arr[] = {11,21,51,101,111};

 int *p = NULL; 
 int *q = NULL;

 p = &(arr[1]);  //fetch capacity 4
 q = &(arr[3]);

printf("%d\n",(q-p));  //2   q-p / 4;



return 0;

}