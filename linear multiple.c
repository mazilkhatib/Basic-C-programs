#include <stdio.h>
#include<conio.h>
void main()
{
   int array[100], search, i, n, count = 0;
 
   printf("Enter the number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d numbers\n", n);
 
   for ( i = 0 ; i < n ; i++ )
      {
	   scanf("%d", &array[i]);
      }
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
   printf("\n\n");
 
   for (i = 0; i < n; i++) 
   {
      if (array[i] == search) 
  	  {
         printf("%d is present at location %d.\n", search, i+1);
	      count++;
      }
   }
   if (count == 0)
      {
	    printf("%d is not present in array.\n", search);
	  }
   else
      {
	    printf("%d is present %d times in array.\n", search, count);
      }
 
   getch();
}