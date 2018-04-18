#include<stdio.h>
#include<conio.h>'
void main()
{
	int dividend,divisor,quotient,remainder;
	printf("Enter Dividend and Divisor:\n");
	scanf("%d%d",&dividend,&divisor);
	printf("Quotient=%d\n",quotient=dividend/divisor);
	printf("Remainder=%d",remainder=dividend%divisor);
	getch();
	
}