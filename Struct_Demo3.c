#include<stdio.h>

#pragma pack(1)   //1 2 3 8  for 1 ans is 9
struct Demo               // for 2 ans is 10
{                         // for 3 ans is 12
 int i;
 char ch;
 float f;
};
int main()
{


printf("%d\n",sizeof(struct Demo));

return 0;

}