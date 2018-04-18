/**
 * C program to find factorial of any number using recursion
 */

#include <stdio.h>

#include<stdio.h>
int fact(int a)
      {
               int p;
               if(a==1)
                        return(1);
               else
               {
                        p=a*fact(a-1);
                        return(p);
               }
      } 
void main()
{
        int n,t;
        clrscr();
        printf("Enter any Number : ");
        scanf("%d",& n);
        t=fact(n);
        printf("Factorial of %d is : %d",n,t);
        getch();
}
        