/* Example to reverse a sentence entered by user without using strings. */

#include <stdio.h>
#include<conio.h>
void reverseSentence()
{
    char c;
    scanf("%c", &c);

    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();

    return 0;
}

