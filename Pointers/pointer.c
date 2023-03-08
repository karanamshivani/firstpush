          //Functions used in pointers

#include <stdio.h>
#include <stdlib.h>
void free(void *ptr);
int read_input(int *ptr, int n);
void display_input(int *ptr, int n);
void biggest_number(int *ptr, int n);
void second_high_digit(int *ptr ,int n);
void binary_conversion(int *ptr, int n); 
void ascending_order(int *ptr, int n);

int main()
{
   int *ptr,i,n,num,opt;
  printf("Enter the input size:");
  scanf("%d",&n);

  ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
      {
         printf("failed to allocate memory in heap\n");
         exit(1);
       }
 
 
 while(1)
 {
  
  printf("0.exit\n1.Read_input\n2.Display_input\n3.Biggest value\n4.2nd highest value\n5.Binary conversion\n6.Ascending order\n");
  printf("Select the option:");
  scanf("%d",&opt);
  
   switch(opt)
  {
      case 0: exit(0);
              free(ptr);
   
      case 1:
            read_input(ptr,n);
      break;
            
            
       case 2:
            display_input(ptr,n);
      break;
            
      case 3:
              biggest_number(ptr,n);
       break;
       
      case 4:
               second_high_digit(ptr,n);
       break;
       
       
      case 5:
                binary_conversion(ptr,n); 
      break;
       
      case 6:
               ascending_order(ptr,n);
      break;     
            
      default:    
              printf("Enter valid input\n");
      break; 
            
            }
            }
            }
             
             
             
             
  int read_input(int *ptr, int n)
  {
     int i;
    for(i=0;i<n;i++)
    {
     printf("Enter the input:\n");
     scanf("%d",&ptr[i]);
     }
  } 
   
   
 void display_input(int *ptr, int n)
 {
    int i;
    
   for(i=0;i<n;i++)
   {
     printf("%p-%d\n",&ptr[i],ptr[i]);
     }
 }
   
 
 void biggest_number(int *ptr, int n)
 {
  int i,big=0;
  for(i=0;i<n;i++)
  {
    if(big<ptr[i])
    big=ptr[i];
  }
   printf("Biggest number is %d\n",big);
 }
     
void second_high_digit(int *ptr ,int n)
 {
   int big=0,sbig=0,i,j;
   for(i=0;i<n;i++)
   {
    if(big<ptr[i])
    big=ptr[i];
    }
     for(j=0;j<n;j++)
     {
       if(ptr[j]!=big)
       {
        if(sbig<ptr[j])
        sbig=ptr[j];
        }
       }
    printf("Second highest value is %d\n",sbig);
 }
        

  
void binary_conversion(int *ptr,int n)
{
 int rem,sum=0,num,i,j;
 for(i=0;i<n;i++)
 {
          num=ptr[i];
          sum=0;
          j=1;
          while(num>0)
          {
          rem=num%2;
          num=num/2;
          sum=sum+j*rem;
          j=j*10;
          }
     
     printf("%d-%d\n",ptr[i],sum);
  }
  
 }
 
 
 void ascending_order(int *ptr,int n)
 {
  int i,j,temp=0;
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if(ptr[i]>ptr[j])
    {
     temp=ptr[i];
     ptr[i]=ptr[j];
     ptr[j]=temp;
     }
     }
      printf("%d\n",ptr[i]);
     }
      
 }
     
          
