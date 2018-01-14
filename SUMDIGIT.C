/* Program to print the sum of digits */

#include<stdio.h>

#include<conio.h>

void main()	

{

int i,n,sum=0,r;

clrscr();

printf("Enter the number\n");

scanf("%d",&n);


while(n!=0)

{

r=n%10;

sum=sum+r;

n=n/10;

}


printf("Sum of digits is = %d",sum);

getch();

}
