#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	int a=1;
	for(c='A';c<='Z';c++)
	{
		printf("Count is %d for %c\n",a,c);
        a=a+1;
	}
}