#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
add(int x,int y)
{
  printf("ans=%d",x+y);
}