#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  printf("Enter The Character:\n");
  scanf("%c",&a);
  if(a=='a' || a=='e' || a=='i'||a=='o'||a=='u' )
  {
  	printf("The character is vowel");
  }
  else{
  	
  	printf("The character is a conconent");
  }
  getch();
}