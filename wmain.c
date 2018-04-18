#include<stdio.h>
#include<conio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define begin decode(a,n,i,m,a,t,e)
void begin()
{
  puts("Hello");
  getch();
}