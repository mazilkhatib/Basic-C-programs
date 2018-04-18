#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,r1,r2,d;
	printf("Enter the valuse of a");
	scanf("%f",&a);
	printf("Enter the value of b");
	scanf("%f",&b);
	printf("Enter the Value of c");
	scanf("%f",&c);
	d=sqrt(abs(b*b-4*a*c));
	r1=(-b+d)/2*a;
	r2=(-b-d)/2*a;
	printf("The root1 is %f",r1);
	printf("The root2 is %f",r2);
	getch();
}