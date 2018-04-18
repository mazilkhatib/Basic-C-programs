#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	(a%2==0)?printf("The number is even number"):printf("The number is odd");
	getch();
}