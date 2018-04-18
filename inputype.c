#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  float b;
  char c;
  printf("Enter the VAlue\n");
  printf("Enter integer\n");
  scanf("%d",&a);
  printf("Enter float\n");
  scanf("%f",&b);
  printf("Enter character\n");
  scanf("%c",&c);
  printf("\n--------------------------------------");
  printf("integer is %d\n",a);
  printf("float is %f\n",b);
  printf("character is %c\n",c);
  
  getch();
}