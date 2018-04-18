#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float b;
	double c;
	char d;
	printf("Enter The Values of Integer,Float,Double & Character to find the size:\n");
	scanf("%d",&a);
	scanf("%f",&b);
	scanf("%lf",&c);
	scanf("%c",&d);
	printf("\nThe Size of Integer %d is %d bytes\n",a,sizeof(a));
	printf("\nThe size of  float %f is %d bytes\n",b,sizeof(b));
	printf("\nThe size of  double %lf is %d bytes\n",c,sizeof(c));
	printf("\nThe sice of character %c is %d bytes\n",d,sizeof(d));
	getch();
}