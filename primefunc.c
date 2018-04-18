#include<stdio.h>
#include<conio.h>
void prime()
{
  int n1, n2, i, j, flag;
  printf("Enter two numbers(intevals): ");
  scanf("%d %d", &n1, &n2);
  printf("Prime numbers between %d and %d are: \n", n1, n2);
  for(i=n1; i<=n2; i++)
  {
      flag=0;
      for(j=2; j<=i-1; j++)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
      {
        printf("%d ",i);
      }
		
	}
}
	
void main()
{
 prime();
 getch();
}
