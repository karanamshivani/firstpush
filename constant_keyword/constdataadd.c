#include <stdio.h>
int main()
{
 int x=10;
 int y=20;
 const int* const ptr=&x;
 
 //*ptr=20;      //compilation error
 
 //ptr=&y;      //compilation error
 
 printf("%d\n",*ptr);
 printf("%p\n",ptr);
 }
