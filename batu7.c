#include<stdio.h>
main() 
{
   int a=1,b = 1;
   int c=a||--b;
   int d=a--&&--b;
   printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
}