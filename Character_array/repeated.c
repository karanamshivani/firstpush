               //Each character repeated how many times in a string        
            
#include <stdio.h>
#include <string.h>
char * repeated(char * S1);


int main()
{
 char S1[20];
 printf("Enter the string:");
 scanf("%s",S1);
 repeated(S1);
 }
 
 char * repeated(char *S1)
 {
   int i,j,count=0;
   for(i=0;S1[i]!=0;i++)
   {
    if(S1[i]==' ')
     continue;
     count=1;
    for(j=i+1;S1[j]!='\0';j++)
    {
     if(S1[i]==S1[j])
     {
      count++;
      S1[j]=' ';
      }
    }
     printf("%c-%d\n",S1[i],count);
 }
 }
