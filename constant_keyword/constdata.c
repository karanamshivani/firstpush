#include <stdio.h>
int main()
{
 int y=20;
 int x=10;
 const int *ptr;
 ptr=&x;
 printf("%p-%d\n",&ptr,*ptr);
 
 //*ptr=30;     //compilation error
 
 ptr=&y;
 printf("%p-%d\n",&ptr,*ptr);
 }
