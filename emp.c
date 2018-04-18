#include<stdio.h>
#include<conio.h>
 struct n{
	char name[100];
	int salary;
	
}
deposite()
{
    int dep,wid;
	printf("Enter The Deposit amount\n");
	scanf("%d",&dep);
	printf("Enter Widrawal\n");
	scanf("%d",&wid);
	printf("Your Deposite Amout is %d",dep);
	printf("\nYour Widrawl amount is %d",wid);
}
void main()
{
	struct n emp;
   printf("Enter the Name\n");
   scanf("%s",emp.name);
   printf("Enter The salary\n");
   scanf("%d",emp.salary);
   printf("The Name is %s",emp.name);
   printf("\nThe Salary is %d",emp.salary);
   deposite();
   getch();	
}