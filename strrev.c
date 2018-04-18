#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[99];
	printf("Enter the number for reverse\n");
	scanf("%s",&ch);
	strrev(ch);
	printf("\nThe Reverse is %s",ch);
	getch();
}