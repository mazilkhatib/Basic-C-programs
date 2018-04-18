#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],size,i,max,min;
	printf("Enter the size \n");
	scanf("%d",&size);
	printf("Enter %d elements\n",size);
	for(i=0;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=size;i++)
	{
	  if(max<a[i])
	  max=a[i];	
	}
	printf("The Maximum is %d",max);
	min=a[0];
	for(i=0;i<=size;i++)
	{
	  if(min>a[i])
	  min=a[i];	
	}
	printf("\nThe Minimum is %d\n",min);
	getch();
}