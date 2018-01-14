/* Program to find the sum of elements of an array */

#include<stdio.h>

#include<conio.h>

void main()

{

int a[50],n,i,sum=0;

clrscr();

printf("Enter the number of elements\n"); scanf("%d",&n);

printf("Enter the elements\n");

for(i=0;i<n;i++)

{

scanf("%d",&a[i]);

sum=sum+a[i];

}

printf("Sum of element = %d ",sum);

getch();

}
