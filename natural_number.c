#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,sum=0;
	printf("Enter The limit to calculate The sum of natural Numbers\n");
	scanf("%d",&a);
	if(a>0)
	  for(i=0;i<=a;i++)
	  {
	   sum=sum+i;
	  }
	  printf("\nThe Sum is %d");
	  getch();
	  }
	  else
  	  {
	    printf("It is zero or negative");
  	   }
   
}