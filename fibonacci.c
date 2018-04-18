#include<stdio.h>
void main()
{
	int f1,f2,f3,k;
	scanf("%d",&k);
	f1=-1;f2=1;
	printf("%d\t%d",f1,f2);
	while((f3=f1+f2)<=k)
	{
		printf("\n%d\n",f3);
		f1=f2;
		f2=f3;
	}
	getch();
}