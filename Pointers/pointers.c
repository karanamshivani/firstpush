  //Swap the bytes using void pointers

#include <stdio.h>
int main()
{
unsigned int x=0x11223344;
unsigned int y=0xaabbccdd;
unsigned int z;
void *xptr=&x;
void *yptr=&y;
void *zptr=&z;
((unsigned char *)zptr)[0]=((unsigned char *)xptr)[0];
((unsigned char *)zptr)[1]=((unsigned char *)yptr)[1];
((unsigned char *)zptr)[2]=((unsigned char *)xptr)[2];
((unsigned char *)zptr)[3]=((unsigned char *)yptr)[3];
 printf("%x\n",(*(unsigned int *)zptr));
 }


