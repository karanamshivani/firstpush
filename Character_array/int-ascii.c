    //Conversion of integer value to ascii value
    
#include <stdio.h>
#include <string.h>
int int_ascii(int num);

int main()
{
 int i,sum,temp,n,num,count;
 char src[10];
 printf("Enter the value:");
 scanf("%d",&num);
 
 n=int_ascii(num);
 printf("%d\n",n);
 }
  
  
int int_ascii(num)
{
 int sum=0,temp=num,i,count=0;
 while(temp!=0)
 {
  temp=temp/10;
  count++;
  }
  
  char src[10],rem;
  for(i=(count-1);rem>0;i++)
  {
   rem=temp%10;
   temp=temp/10;
   src[i]=rem+48;
   }
    src[count]='\0';
    return num;
}
   
 
