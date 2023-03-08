#include <stdio.h>
int main()
{
 int x=10;
 int * const ptr=&x;
 *ptr=20;
 int y=30;
 
 //ptr=&y     //compilation error
 
 printf("%p\n",ptr);
 printf("%d\n",x);
 }
