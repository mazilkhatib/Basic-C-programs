void main()
{
int num,a,n; 
int sum=0;
printf("\n Enter a 4 digit number:");
scanf("%d",&num);
a=num % 10;
n=num/10;
sum=sum + a;
a=num % 10;
n=num/10; 
sum=sum+a; 
a=num%10;
n=num/10; 
sum=sum+a; 
a=num%10;
n=num/10; 
sum=sum+a; 
printf("\n The sum of the 5 digit of %d is %d",num,sum); 
}