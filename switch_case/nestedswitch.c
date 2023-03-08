
                                            //Doing operations with nested switch statements.
      
#include <stdio.h>
#include <stdlib.h>
int main()
{
unsigned int num,option,sum,rem,temp,i,bit,bit1,bit2,count,count1,a,b,c;
char d;
char sub_opt;
 printf("Enter the option\n1.Arithmetic operations\n2.Bitwise operations\n3.Swap the content of two variables\n4.Charcter to integer constant\n5.Fibonacci series\n");
 scanf("%d",&option);
 switch(option)
 {
 	case 0:
    		exit(0);
    		
  	case 1:      //Arithmetic operations
     		printf("Select the option to perform Arithmetic operations\na.Reverse a number\nb.Sum of digits\nc.Decimal to binary\nd.Binary to decimal\ne.Palindrome\n");
   	  	__fpurge(stdin);
    	 	scanf("%c",&sub_opt);
  	   	printf("Enter the number:");
 	    	scanf("%d",&num);
	     	switch(sub_opt)
		    {
		     case 'a':
		               sum=0,temp=num;
			     	while(temp>0)
			     	{
			       	rem=temp%10;
			       	sum=sum*10+rem;
			       	temp=temp/10;
			      	}
        			printf("%d\n",sum);  
        			break;
                   case 'b': 
                           sum=0,temp=num;
                           while(temp>0)
                         {
                           rem=temp%10;
                           temp=temp/10;
                           sum=sum+rem;
                          }
                           printf("%d-%d\n",num,sum);   
                          break;
                  case 'c':
                          sum=0,i=1,temp=num;
                          while(temp!=0)
                         { 
                           rem=temp%2;
                           temp=temp/2;
                           sum=sum+i*rem;
                           i=i*10;
                         }
                         printf("%d\n",sum);
                         break;
               case 'd':
                        sum=0,i=1,temp=num;
                          while(temp!=0)
                         { 
                           rem=temp%10;
                           temp=temp/10;
                           sum=sum+i*rem;
                           i=i*2;
                         }
                         printf("%d\n",sum);
                         break;
             case 'e':
                      sum=0,temp=num;
                      while(temp>0)
                      {
                        rem=temp%10;
                        sum=sum*10+rem;
                        temp=temp/10;
                      }
                        if(sum==num)
                           printf("It is a palindrome number\n");  
                        else
                           printf("It is not a palindrome number\n");
                        break;
            default:printf("Invalid input\n");
                    break;
                    }
                      break;
                    
       case 2:                 //Bitwise operations
              printf("Select the option to perform Bitwise operations\na.101 replace with 111\nb.No of zeros and ones\nc.Decimal to Binary\nd.Swap the bits\n");
              __fpurge(stdin);
    	 	scanf("%c",&sub_opt);
  	   	printf("Enter the number:");
 	    	scanf("%x",&num);
 	    	switch(sub_opt)
 	    	{
 	    	  case 'a':
 	    	             for(bit=0;bit<=29;bit++)
                           {
                            if((((num & (0x7<<bit))>>bit) == 0x5))
 	                        num=num|0x7;
                           }
                             printf("%d\n",num);
                             break;
 	    	          
 	    	    case 'b':
 	    	             count=0,count1=0;
 	    	             for(bit=0;bit<32;bit++)
 	    	             {
                              if((num&(0x1<<bit))==0)
                               	count++;
                              else
                               	count1++;
                              }
                              num=num>>1;
                               printf("%d %d\n",count,count1);
                               break;
                 case 'c':
                          for(bit=0;bit<31;bit++)
                          {
                           if((((num&(0x1<<bit))>>bit)==0))
                               printf("0");
                           else 
                               printf("1");
                              }
                           break;
                           printf("\n");                      
                 case 'd':
                          printf("Enter the bits to be swapped bit1:bit2(0-31):");
                          scanf("%d %d",&bit1,&bit2);
                          num=(num&~(0x1<<bit2))|((0x1<<bit1))|(num&(0x1<<bit1))<<(bit2-bit1)|(num&(0x1<<bit2))|(bit2-bit1);
                          printf("%d\n",num);
                         break;
                 
                 default:("Invalid input\n");
                        break;
                }
                   break;
            
            
        case 3:                             //Swap the content of two variables
               printf("Select the option to perform swap the content\na.Without third variable\nb.With third variable\nc.Using bitwise operators\n");
               __fpurge(stdin);
               scanf("%c",&sub_opt); 
               printf("Enter the values of a and b:");
               scanf("%d %d",&a,&b);
               switch(sub_opt)
               {
                 case 'a':
                         a=a+b;
                         b=a-b;
                         a=a-b;
                         printf("%d %d\n",a,b);
                         break;
                case 'b':
                        temp=a;
                        a=b;
                        b=temp;
                        printf("%d %d\n",a,b);
                        break;
               case 'c':
                         a=a^b;
                         b=a^b;
                         a=a^b;
                         printf("%d %d\n",a,b);
                         break;
               default:("Invalid input\n");
                        break;
             }
                  break;
                  
              
              
        case 4:             //Character to integer constant
               printf("Select the option\na.Change case of the character\nb.Convert character to integer constant\n"); 
               __fpurge(stdin);
               scanf("%c",&sub_opt);
               printf("Enter a character:");
               __fpurge(stdin);
               scanf("%c",&d);
               switch(sub_opt)
               {
                 case 'a':
                      ((d>=65)&&(d<=90))?(printf("Lower case is %c\n",d+32)):(((d<=122)&&(d>=97))?(printf("Upper case: %c\n",d-32)):(printf("Other character\n")));
                      break;
                 case 'b':
                      printf("%d\n",d-48);
                      break;
                default:printf("Invalid input\n");
                     break;
               }
                  break;
               
 	    	             
 	    	           
         case 5:             //Fibonacci series
               printf("Enter the numbers :");
               scanf("%d %d",&a,&b);
               printf("Enter the range :");
               scanf("%d",&num);
               while(num>0)
               {
                 c=a+b;
                 a=b;
                 b=c;
                 printf("%d\n",c);
                 num--;
                 }
          
          }
          }
                 
               
                          
 
