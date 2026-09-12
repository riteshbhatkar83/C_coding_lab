#include<stdio.h>


#pragma pack(1)   //1 2 3 8 
struct Demo
{
 int i;
 char ch;                
 float f;                 
};


int main()
{
struct Demo dobj1;
struct Demo dobj2;

struct Demo *dp = NULL;    //here we creat a pointer which points to 
dp = &dobj2;              //object of structure.and hold its base address


//direct accessing operator
dobj1.i=11;
dobj1.ch='A';
dobj1.f=90.99f;

//indirect accessing operator
dp->i = 21;
dp->ch='B';
dp->f=91.99;


printf("%d\n",dobj1.i);
printf("%d\n",dp->i);

return 0;

}