                                   //Given string is palindrome or not

#include <stdio.h>
#include <string.h>
char * palindrome(char * src);

int main()
{
 char src[10];
 int n,m,count;
 printf("Enter the string:");
 scanf("%s",src);
 void *ptr1=palindrome;
((char *(*)(char *))ptr1)(src);

}
  
  
char * palindrome(char * src)
{
  int i,n,m,count=0;
  n=strlen(src);
  for(i=0;i<n;i++)
  {
   if((src[i])==(src[n-i-1]))
   count++;
   }
   if(count==i)
    printf("It is a palindrome\n");
    
   else
     printf("Not a palindrome\n");
    
}
   
   
 
