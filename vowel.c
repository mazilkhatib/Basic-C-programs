#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  printf("Enter The Character:\n");
  scanf("%c",&ch);
  if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
  {
  	printf("The character is vowel");
  }
  else{
  	
  	printf("The character is a conconent");
  }
  getch();
}