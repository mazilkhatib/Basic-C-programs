#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y=0,z,r;
	printf("Enter a Number\n");
	scanf("%d",&x);
	z=x;
	while(x!=0)
	{
		r=x%10;
		y=y*10+r;
		x=x/10;
	}
	if(z==y)
	{
		printf("It is palidrome\n");
	}
	else
	{
		printf("it is not a palidrome\n");
	}
		
}