                   //String concatenation

#include <stdio.h>
#include <string.h>
char * concatenate(char * S1, char *S2);

int main()
{
 char S1[20],S2[20];
 printf("Enter the string:");
 scanf("%s",S1);
 scanf("%s",S2);
 concatenate(S1,S2);
 }
  
  
char * concatenate(char *S1, char *S2)
{
  int i,j,l1,l2;
  l1=strlen(S1);
  l2=strlen(S2);
  for(i=l1,j=0;S2[j]!='\0';i++,j++)
  {
    S1[i]=S2[j];
    }
     S1[i]=0;
     printf("%s\n",S1);
}
  
   
