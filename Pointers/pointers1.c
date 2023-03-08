          //Pointers on arithmetic operations

#include <stdio.h>
int main()
{
 unsigned int a=0x41424344;
 unsigned short int *ptr1=&a;
 unsigned char *ptr2=&a;
 ++*ptr1;
 ++*ptr2;
printf("ptr1-%c\n",*ptr1);
printf("ptr1-%p\n",ptr1);
printf("ptr2-%c\n",*ptr2);
printf("ptr2-%p\n",ptr2);
*ptr1++;
*ptr2++;
printf("ptr1-%c\n",*ptr1);
printf("ptr1-%p\n",ptr1);
printf("ptr2-%c\n",*ptr2);
printf("ptr2-%p\n",ptr2);
}
