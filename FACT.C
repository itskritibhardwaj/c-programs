/* Program to print factorial on a number */

#include<stdio.h>

#include<conio.h>

void main()

{

int i,n,f=1;

clrscr();

printf("Enter the number\n");

scanf("%d",&n);

for(i=1;i<=n;i=i+1)

{

f=f*i;

}

printf("Factorial = %d",f);

getch();

}
