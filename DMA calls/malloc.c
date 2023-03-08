#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *ptr;
 ptr=(int*)malloc(1*sizeof(int));
 if(ptr==NULL)
 {
  printf("failed to allocate memory in heap\n");
  exit(1);
  }
   *ptr=10;
   printf("%p-%d\n",ptr,*ptr);
   free(ptr);
}
