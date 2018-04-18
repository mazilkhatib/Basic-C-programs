  #include <stdio.h>

void main()
     {
     int n, i, j, binno=0,deci;

     printf("Enter a number  : ");
     scanf("%d",&n);

     deci=n;
     i=1;

      for(j=n;j>0;j=j/2)
       {
        binno=binno+(n%2)*i;
        i=i*10;
        n=n/2;
       }
     
     printf("\nThe Binary of %d is %d.\n\n",deci,binno);
 }