//C program to find HCF of two numbers
#include <stdio.h>
 
int main()
{
    int Num1, Num2, i, GCD;
 
    printf("Please Enter two integer Values \n");
    scanf("%d %d", &Num1, &Num2);
 
    for(i = 1; i <= Num1 && i <= Num2; i++)
    {
        if(Num1 % i == 0 && Num2 % i == 0)
            GCD = i;
    }
 
    printf("GCD of %d and %d is = %d", Num1, Num2, GCD);
    return 0;
}