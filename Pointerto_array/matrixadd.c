#include<stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

void matrixadd(int (*ptr1)[],int (*ptr2)[]);

int main()
{
int i,j,mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];

 printf("Enter matrix mat1 (%dx%d)row-wise :\n",ROW,COL);
         
          for(i=0;i<ROW;i++)
          {
          for(j=0;j<COL;j++)
          scanf("%d",&mat1[i][j]);
          }       
            
          printf("Enter matrix mat2 (%dx%d)row-wise :\n",ROW,COL);
          for(i=0;i<ROW;i++)
          {
          for(j=0;j<COL;j++)
          scanf("%d",&mat2[i][j]);
          }                
            
          matrixadd(mat1,mat2);
}
  
  
void matrixadd(int (*ptr1)[COL],int (*ptr2)[COL])
{  
  int i,j,mat3[ROW][COL]; 
       
   for(i=0;i<ROW;i++)
   {
   for(j=0;j<COL;j++)
   mat3[i][j]=ptr1[i][j]+ptr2[i][j];
}  


  printf("The resultant matrix mat3 is :\n"); 
   for(i=0;i<ROW;i++)
   {
     for(j=0;j<COL;j++)
      printf("%d\t",mat3[i][j]);
      printf("\n");
}
}
