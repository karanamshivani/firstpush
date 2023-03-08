                             //Implementation of queue

#include <stdio.h>
#include <stdlib.h>
#define M 5
int findex=-1;
int lindex=-1;
void insert(int *ptr,int num);
void delete();
void display(int *ptr);
void ascending(int *ptr);


int main()
{
 int queue[M];
 int opt,i,num;
 
 while(1)
 {
  printf("Menu\n0.exit\n1.insert\n2.delete\n3.display\n4.ascending order\n");
  printf("Select the option : ");
  scanf("%d",&opt);
  
  switch(opt)
  {
   case 0: exit(0);
   
   case 1:
          printf("Enter the value\n");
          scanf("%d",&num);
          insert(queue,num);
   break;
   
   case 2:
           delete();
   break;
   
   case 3:
          display(queue);
   break;
   
   case 4:
          ascending(queue);
   break;
   
   default:printf("Invalid input\n");
   break;
    
     }
   }
}
   
   
void insert(int *ptr, int num)
 {
    if(findex==-1)
       findex++;
    else if(((lindex==M-1)&&(findex==0)||(lindex==findex-1)))
    {
       printf("queue is full\n");
       return;
    } 
    
    else if(lindex==M-1)
      {
           lindex=0;
          ptr[lindex]=num;
          return;
      }
          lindex++;
          ptr[lindex]=num;
}

 
 
 void delete()
 {
  if(findex==-1)
  {
   printf("queue is empty\n");
   return;
   }
   else if(findex==lindex)
   {
    findex=lindex=-1;
    return;
    }
     else if(findex==M-1)
     {
      findex=0;
      return;
      }
      findex++;
 }
 
 
 
 void display(int *ptr)
 {
   int j;
   if(findex==-1)
   {
    printf("queue is empty\n");
     return;
     }
      if(findex<=lindex)
      {  
      for(j=findex;j<=lindex;j++)
       printf("%d\n",ptr[j]);
      }
      
  else if(lindex<findex)
  {
    for(j=findex;j<M-1;j++)
    printf("%d\n",ptr[j]);
  
    for(j=0;j<=lindex;j++)
    printf("%d\n",ptr[j]);
  }
 }
 
     
     
 void ascending(int *ptr)
 {
   int i,j,temp;
   
   if(findex>lindex)
   {
   
   for(i=findex;i<=M+lindex;i++)
   {
    for(j=i+1;j<=M+lindex;j++)
    {
     if(ptr[i%M]>ptr[j%M])
     {
       temp=ptr[i%M];
       ptr[i%M]=ptr[j%M];
       ptr[j%M]=temp;
       }
     }
   } 
 }
  
 else 
 {
   for(i=findex;i<=lindex;i++)
   {
    for(j=i+1;j<=lindex;j++)
    {
     if(ptr[i]>ptr[j])
     {
       temp=ptr[i];
       ptr[i]=ptr[j];
       ptr[j]=temp;
       }
     }
     }
 }
      display(ptr);  
}
 

