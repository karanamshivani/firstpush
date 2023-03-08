          //Conversion of ascii value to integer value

#include <stdio.h>
#include<string.h>
int ascii_int(char * src);

int main()
{
  char src[10];
 int i,n,sum,temp;
 printf("Enter the string:");
 scanf("%s",src);
 
 n=ascii_int(src);
 printf("%d\n",n);
 }
 
 int ascii_int(char * src)
 {
  int sum=0,i,temp;
  for(i=0;src[i]!='\0';i++)
  {
   if((src[i]>='0')&&(src[i]<='9'))
   {
    temp=src[i]-48;
    sum=sum*10+temp;
    }
    }
     return sum;
}     
