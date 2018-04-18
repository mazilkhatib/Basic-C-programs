#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The number is positive\n");
	
	}
	else if(a<0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("Invalid Input\n");
	}
}