#include<stdio.h>
void main()
{
 int num,i=1,j,count;
 printf("Enter Num value To Print Prime Numbers between 1 and Num: ");
 scanf("%d",&num);
 printf("Prime Numbers upto %d :\n \n",num);
 while(i<=num)
 {
  count=0;
  for(j=1;j<=i;j++)
  {
   if(i%j==0) 
   count++;
  }
  if(count==2)  
  printf("%d ",i);
  i++;
 }
 printf("\n\n");
}
