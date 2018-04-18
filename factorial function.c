#include<stdio.h>
long int fact(long int k)
{
	long int i,p=1;
	for(i=1;i<=k;i++)
	{
		p=p*i;
	}
	return(p);
}
void main()
{
	long int n,f;
	printf("Enter a number to find the factorial:\n");
	scanf("%d",&n);
	f=fact(n);
	printf("The factorial is \n%ld\n",f);
}
