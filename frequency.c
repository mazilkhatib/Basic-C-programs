/* C Program - Find Frequency of Character in String */
		
#include<stdio.h>
#include<conio.h>
void main()
{

	int i, count=0;
	char str[1000], ch;
	printf("Enter the String : ");
	gets(str);
	printf("Enter a character to find frequency : ");
	scanf("%c",&ch);
	for(i=0; str[i]!='\0'; i++)
	{
		if(ch==str[i])
		{
			count++;
		}
	}
	printf("Frequency of the character %c = %d",ch, count);
	getch();
}