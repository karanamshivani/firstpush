                     //Array of pointers using statically

#include <stdio.h>
void display(int **dptr,int np,int ne);

int main()
{
 int x[3]={10,20,30};
 int y[3]={40,50,60};
 
 int *ptr[2]={x,y};
 
 
 int i,j;

 printf("%p\n",ptr);
 printf("%p-%p\n",&ptr[0],ptr[0]);
 printf("%p-%p\n",&ptr[1],ptr[1]);
 
 printf("\n");
 
 for(i=0;i<2;i++)
 printf("%p-%p\n",&ptr[i],ptr[i]);
 
 printf("\n");
 
  for(i=0;i<2;i++)
 {
 printf("%p-%p\n",&ptr[i],ptr[i]);
 
 for(j=0;j<3;j++)
 printf("%p-%d\n",&ptr[i][j],ptr[i][j]);
 
 }
 
}
 
 
 void display(int **dptr,int np, int ne)
 {
  int i,j;
  for(i=0;i<np;i++)
  {
   printf("\n");
   printf("%p-%p\n",&dptr[i],dptr[i]);
   
   for(j=0;j<ne;j++)
   printf("%p-%d\n",&dptr[i][j],dptr[i][j]);
  }
}
