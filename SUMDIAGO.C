/* Program to print the sum of diagonal elements of a matrix */

#include<stdio.h>

#include<conio.h>

void main()

{

int a[5][5],n,i,j,sum=0;

clrscr();

printf("Enter the order of square matrix\n "); scanf("%d",&n);

printf("Enter the elements of Matrix\n");

for(i=0;i<n;i++)

{

for(j=0;j<n;j++)

{

scanf("%d",&a[i][j]);

}

printf("\n");

}

for(i=0;i<n;i++)

{

for(j=0;j<n;j++)

{

if(i==j)

sum=sum+a[i][j];

}

}

printf("SUM of Diagonal elements = %d",sum);

getch();

}
 
