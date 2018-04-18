#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int n;
	char a[100];
	puts("Enter a String");
	gets(a);
	n=strlen(a);
	printf("The Length of string is %d",n);
	getch();
}