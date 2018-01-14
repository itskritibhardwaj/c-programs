/* To print Fibonacci Series */

#include<stdio.h>

#include<conio.h>

void main()

{

int i,n,a=0,b=1,c=0;

clrscr();

printf("Enter the number of terms\n");

scanf("%d",&n);

printf("%d,%d",a,b);

for(i=1;i<=n;i=i+1)

{

c=a+b;

printf(",%d",c);

a=b;

b=c;

}

getch();

}
