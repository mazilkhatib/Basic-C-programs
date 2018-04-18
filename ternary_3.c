#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter the numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a>c)?printf("%d is largest",a):(b>a && b>c)?printf("%d is largest",b):printf("%d is largest",c);
	getch();
}