#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=1;
	printf("Enter a number to check whether it is prime or not\n");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	 printf("It is a prime number\n");
    else
     printf("It is not a prime number\n");
    getch();
}