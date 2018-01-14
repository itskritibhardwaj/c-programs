/* Program to print Armstrong numbers from 1 to 100 */

#include<math.h>

#include<stdio.h>

#include<conio.h>

void main()

{

int i,r,nd,n,sum;

clrscr();

printf("The Armstrong numbers are:\n"); for(i=1;i<=100;i=i+1) {

nd=0;

sum=0;

/* To calculate the number of digits */

for(n=i;n!=0;n=n/10)

nd=nd+1;

/* Digit Extraction */

for(n=i;n!=0;n=n/10)

{

r=n%10;

sum=sum+pow(r,nd);

}

if(i==sum)

printf("%d\t",i);

}

getch();

}
