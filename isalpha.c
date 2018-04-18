#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  char a;
  printf("Enter an Alphabet\n");
  scanf("%c",&a);
  if(!isalpha(a))
  {
  	printf("It is Not an alphabet\n");
  }
  if(isalpha(a))
  {
  	printf("It is an Aplhabet\n");
  }
}