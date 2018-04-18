#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	printf("Enter A Number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The Square of %d is %d\n",n,n*n);
	printf("The Factorial of %d is %d",n,f);
	getch();
}