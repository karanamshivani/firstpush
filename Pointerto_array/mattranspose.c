#include <stdio.h>
#define ROW 3
#define COL 4

void transpose(int (*ptr)[]);
int main()
{
 int mat1[ROW][COL],mat2[ROW][COL],i,j;
 printf("Enter matrix mat1 (%dx%d) row-wise : \n",ROW,COL);
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   scanf("%d",&mat1[i][j]);
   }
  }
  
  
  
  transpose(mat1);
}



void transpose(int (*ptr)[COL])
{

  int i,j,mat2[COL][ROW];
  
  for(i=0;i<COL;i++)
  {
   for(j=0;j<ROW;j++)
   {
    mat2[i][j]=ptr[j][i];
   }
  }
  
  
  printf("Transpose of matrix is:\n");
  
  for(i=0;i<COL;i++)
  {
   for(j=0;j<ROW;j++)
   {
    printf("%d ",mat2[i][j]);
   }
    printf("\n");
  }
}

