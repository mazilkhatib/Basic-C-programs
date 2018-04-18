#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter a number\n");
	scanf("%d",&num);
	i=1;
	printf("Prime factors of %d are\n",num);
	printf("%d\n",i);
	i=i+1;
	while(num!=1)
	{
		if(num%i==0)
		 printf("%d\n",i);
	    else{
    		i++;
    		continue;
    	}
    	num=num/i;
	}
}