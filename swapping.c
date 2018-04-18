#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter The numbers for swapping\n");
	scanf("%d%d",&a,&b);
	printf("Before Swapping a=%d & b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping a=%d & b=%d",a,b);
	getch();
}