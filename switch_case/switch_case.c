#include <stdio.h>
int main()
{
 int option,x,i,number,min,max,sum,rem,count=0,temp;
 
 printf("Select an option:\n1.Reverse a number\n2.Sum of digits\n3.Count no of digits\n4.Palindrome\n5.Decimal to Binary\n6.Even or Odd\n");
 scanf("%d",&option);
 
 
 switch(option)
 {
  case 1:
     printf("Enter the value:");
     scanf("%d",&x);
     sum=0,temp=x;
     while(temp>0)
     {
      rem=temp%10;
      sum=sum*10+rem;
      temp=temp/10;
      }
          printf("%d\n",sum);
          x++;   
        break;
        
        
 case 2:
     printf("Enter the min and max values:");
     scanf("%d %d",&min,&max);
    while(min<=max)
    {
     sum=0,temp=min;
     while(temp>0)
     {
      rem=temp%10;
      temp=temp/10;
      sum=sum+rem;
      }
         printf("%d-%d\n",min,sum);
         min++;   
      }
        break;
        
        
 case 3:
      printf("Enter the number:");
      scanf("%d",&x);
      while(x>0)
      {
       x=x/10;
       count++;
       }
        printf("%d\n",count);
        break;
        
        
 case 4:
     printf("Enter the min and max values:");
     scanf("%d %d",&min,&max);
    while(min<=max)
    {
     sum=0,temp=min;
     while(temp>0)
     {
      rem=temp%10;
      sum=sum*10+rem;
      temp=temp/10;
      }
       if(sum==min)
          printf("%d\n",min);
          min++;   
      }
        break;
        
        
 case 5:
 printf("Enter the number:");
    scanf("%d",&x);
    sum=0,i=1,temp=x;
    while(temp!=0)
    { 
     rem=temp%2;
     temp=temp/2;
     sum=sum+i*rem;
     i=i*10;
     }
      printf("%d\n",sum);
       break;
       
       
  case 6:
     printf("Enter the value:");
     scanf("%d",&x);
    if(x%2==0)
       printf("It is an even number\n");
    else
       printf("It is an odd number\n");
    break;
  default:
       printf("Invalid input\n");
 }
 }

