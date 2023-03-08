#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr,*nptr,i;
ptr=(int *)malloc(5*sizeof(int));
if(ptr==NULL)
{
 printf("failed to allocate memory in heap\n");
 exit(1);
 }
  for(i=0;i<5;i++)
  {
   scanf("%d",&ptr[i]);
   }
 
 nptr=(int *)realloc(ptr,10*sizeof(int));
 if(nptr==NULL)
 {
  printf("failed to increase the memory\n");
  exit(2);
  }
  for(i=5;i<10;i++)
  {
   scanf("%d",&nptr[i]);
   }
  for(i=0;i<10;i++)
  {
   printf("%d ",nptr[i]);
   }
}
