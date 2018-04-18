#include<stdio.h>  
#include<conio.h>
void main()
{
  int n1, n2, i, temp, sum, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(i=n1; i<n2; ++i)
  {
      temp=i;
      sum=0;
      while(temp!=0)
      {
          rem=(temp%10);
          sum+=rem*rem*rem;
          temp/=10;
      }
      if(sum==i)
      {
          printf("%d ",i);
      }
  }
  getch();
}