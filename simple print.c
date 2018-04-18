#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	long int i,n;
	printf("Enter The Number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  printf("%ld\t",i*i*i*i*i*i*i);
	}
	getch();
}