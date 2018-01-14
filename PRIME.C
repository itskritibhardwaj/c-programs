/* Program to print whether Prime number or not */

#include<stdio.h>

include<conio.h>

v#oid main()

{

int n,i,f=0;

clrscr();

printf("Enter the number\n");

scanf("%d",&n);

for(i=1;i<=n;i=i+1)

{

if(n%i==0)

f=f+1;

}

if(f==2)

printf("Prime number");

else

printf("Not a prime number");

getch();

}
