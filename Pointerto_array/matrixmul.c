#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 4
#define COL2 2
void matrixmul(int (*ptr1)[],int (*ptr2)[]);
int main()
{
int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2];
int i,j,k;

        printf("Enter matrix mat1 (%dx%d)row-wise :\n",ROW1,COL1);
          for(i=0;i<ROW1;i++)
          {
         	 for(j=0;j<COL1;j++)
         	 {
          	scanf("%d",&mat1[i][j]);
          	}
         }       
            
	printf("Enter matrix mat2 (%dx%d)row-wise :\n",ROW2,COL2);
          for(i=0;i<ROW2;i++)
          {
         	 for(j=0;j<COL2;j++)
         	 {
          		scanf("%d",&mat2[i][j]);
          	}
          } 
          
           
           matrixmul(mat1,mat2);
}



void matrixmul(int (*ptr1)[COL1],int (*ptr2)[COL2])
{
  int i,j,k;
  int ptr3[i][j];
  
  for(i=0;i<ROW1;i++)
  {
   for(j=0;j<COL2;j++)
   {
    	ptr3[i][j]=0;
    for(k=0;k<COL1;k++)
    {
      ptr3[i][j]+=ptr1[i][k]*ptr2[k][j];
     }
   }
  }
   
   printf("The resultant matrix mat3 is :\n");
   for(i=0;i<ROW1;i++)
   {
    for(j=0;j<COL2;j++)
    {
    printf("%d\t",ptr3[i][j]);
    }
    printf("\n");
   }
} 

