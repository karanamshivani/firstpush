                      //search for a given string
 
#include <stdio.h>
#include <string.h>
int * mystrcmp(char *src,char * dst,int n);

int main()
{
 int i,c=0,n,M,stat=0;
 char src[100]="Hi hello Hi Hi Hi";
 char dst[10]="Hi";
 n=strlen(dst);
 M=strlen(src);
 void *ptr1=mystrcmp;
 ((int * (*)(char *,char *,int))ptr1)(&src[i],dst,n);
 
 for(i=0;i<=(M-n); )
 {
 stat=mystrcmp(&src[i],dst,n);
   if(stat==0)
   {
    c++;
    i=i+n;
    }
     i++;
   }
    printf("%d\n",c);
 }
 
 
int * mystrcmp(char * src,char * dst,int n)
{
   int i,M;
   for(i=0;i<n;i++)
   {
    if(src[i]!=dst[i])
     return 1;
     }
      return 0;
}
    
