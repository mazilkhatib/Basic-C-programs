#include<stdio.h>
#include<math.h>
void main()
{
   int a,b,i;
	printf("Enter The number\n");
	scanf("%d",&a);
	printf("Ente The Power\n");
	scanf("%d",&b);
   for(i=1;i<b;i++)
   {
   	a*=a;
   }
   printf("The output:%d",a);
	getch();
}