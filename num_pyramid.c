#include <stdio.h>
#include<conio.h>
int main()
{
    int rows,space,i,j;

    printf("Enter number of rows: ");// enter a number for generating the pyramid
    scanf("%d",&rows);

    for(i=0; i<rows; i++)         // outer loop for displaying rows
    {
        for(space=1; space <= rows-i; space++)  // space for each and every element
            printf("  ");

        for(j=0-i; j <= i; j++) //inner loop for displaying the pyramid of numbers
        {

            printf("%2d",abs(j));   // prints the value

        }
        printf("\n");         // every line in different row
    }

    getch();
}