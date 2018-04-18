#include <stdio.h>
void main()
{
    int n,count=0,sum=0,r;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        // n = n/10
        r=n%10;
        n /= 10;
        sum=sum+r;
        
    }

    printf("sum of digits: %d\n",sum);
}