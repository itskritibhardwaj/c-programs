/* Program to print sum of numbers up to n */

#include<stdio.h>

#include<conio.h>

void main()

{

int i,n,sum=0;

clrscr();

printf("Enter 'n'\n");

scanf("%d",&n);

for(i=1;i<=n;i=i+1)

{

sum=sum+i;

}

printf("Sum = %d",sum);

getch();

}
