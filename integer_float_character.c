#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float b;
	char c;
	printf("Enter integer,Float and charactor for display:\n");
	scanf("%d",&a);
	scanf("%f",&b);
	scanf("%c",&c);
	printf("The entered Values are :\n1 Intege=%d \n2:float=%f \n3.Character=%c",a,b,c);
	getch();
}