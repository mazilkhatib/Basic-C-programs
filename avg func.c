#include<stdio.h>
float average(float x,float y)
{
  float z;
  z=(x+y)/2;
  return(z);
}
void main()
{
	float a,b,c;
	printf("Enter two Variables:\n");
	scanf("%f%f",&a,&b);
	c=average(a,b);
	printf("Avg=%f\n",c);
}
