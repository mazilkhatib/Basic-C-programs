#include<stdio.h>
#include<conio.h>
void main()
{
	double a,b;
	int c;
	printf("Enter The Numbers:\n");
	scanf("%lf%lf",&a,&b);
	printf("Enter Your Choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		{
			printf("The Addition is %lf",a+b);
			break;
		}
		case 2:
		{
			printf("The Subtraction is %lf",a-b);
			break;
		}
		case 3:
		{
			printf("The Multiplication is %lf",a*b);
			break;
		}
		case 4:
		{
			printf("The Division %lf",a/b);
			break;
		}
		
	}
	getch();
}