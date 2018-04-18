#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double a,n;
	printf("Enter a number\n");
	scanf("%lf",&a);
	printf("Enter The Power\n");
	scanf("%lf",&n);
    printf("The Number %lf Raised to the power %lf is %lf",a,n,pow(a,n));
	getch();	
}