
#include <stdio.h>
#include<conio.h>
void main()
{
    int i, n, a = 0, b = 1, c;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    getch();
}
	
