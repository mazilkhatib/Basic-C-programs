#include <stdio.h>  
#include<conio.h>   
void main() {  
    int inputDays, years, months, weeks, days;  
    printf("Enter number of Days\n");  
    scanf("%d", &inputDays);  
    years=inputDays/365;
    inputDays=inputDays-years*365; 
    months=inputDays/30;
    inputDays=inputDays-months*30; 
    weeks=inputDays/7;
    inputDays=inputDays-weeks*7; 
    days=inputDays;
    printf("Years : %d\n", years);  
    printf("Months : %d\n", months);  
    printf("Weeks : %d\n", weeks);  
    printf("Days : %d", days);  
    getch();  
} 