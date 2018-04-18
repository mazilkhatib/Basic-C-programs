#include<ctype.h>
#include<stdio.h>
void main()
{
	char x;
	printf("Enter any character\n");
	scanf("%c",&x);
	if(!isalnum(x))
	{
		printf("It is neither letter nor digit");
		exit(0);
	}
    if(isalpha(x))
    printf("It is a letter\n");
	else
    printf("It is a digit");
	getch();
}