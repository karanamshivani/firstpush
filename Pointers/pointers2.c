/*#include <stdio.h>
int main()
{
 int *ptr1=0x5000;
 int *ptr2=0x5008;
 //printf("%d\n",sizeof(*ptr1));
 printf("%d\n",(ptr2-ptr1));
 }
 */
  
  
#include <stdio.h>
int main()
{
 int x[5]={1,2,3,4,5};
 int *ptr=x;
 int ret;
 ret=&ptr[2]-&ptr[0];
 printf("%d\n",ret);
 ret=((void *)&ptr[2])-((void *)&ptr[0]);
 printf("%d\n",ret);
 ret=((char *)&ptr[2])-((char *)&ptr[0]);
 printf("%d\n",ret);
 }

