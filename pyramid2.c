#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,n;
	printf("Enter The number of rows:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(l=i-1;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	getch();
}