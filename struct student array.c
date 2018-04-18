#include<stdio.h>
#include<conio.h>
struct student
{
	char name[100];
	int roll;
	float marks[3];
	float total;
	float percentage;	
}s[100000];
void main()
{ 
  int i,j,n;
  printf("Enter The No of Students:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
 {
	printf("Enter The data of %d student\n",i);
	printf("Enter The roll no:\n");
	scanf("%d",&s[i].roll);
	printf("Enter The name of student\n");
	scanf("%s",s[i].name);
	s[i].total=0;
	for(j=0;j<3;j++)
	{
		printf("Enter Marks %d\n",j+1);
		scanf("%f",&s[i].marks[j]);
		s[i].total=s[i].total+s[i].marks[j]; 
	}
   s[i].percentage=s[i].total/300*100;
	
  }  
  for(i=1;i<=n;i++)
  {
  	printf("\n\nThe Data of %d student is\n",i);
	printf("\nRoll no %d\n",s[i].roll);
	printf("\nName : %s\n",s[i].name);
	printf("\nTotal: %f\n",s[i].total);
	printf("\nPercentage: %f\n\n",s[i].percentage);
  }	
 getch();
}