#include "stdio.h"
#include "conio.h"
float power(float b,int p)
{
 if(p==0)
  return 1;
 else
  return(b*power(b,p-1));

}
void main()
{
  int p;
  float b,pow=0.0;

  clrscr();
  printf("Enter the base &power :");
  scanf("%f",&b);
  scanf("%d",&p);
  pow=power(b,p);
  printf("%f",pow);
  getch();
}
