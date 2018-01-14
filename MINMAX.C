/* Program to find the minimum and maximum values in an Array */

#include<stdio.h>

#include<conio.h>

void main()

{

int a[10],i,n,x,y;

clrscr();

printf("Enter the number of elements\n"); scanf("%d",&n);

printf("Enter the elements\n");

for(i=0;i<n;i++)

{

scanf("%d",&a[i]);

}

x=a[0];

for(i=0;i<n;i++)

{

if(a[i]>x)

x=a[i];

}

printf("Maximum Value = %d\n",x);

y=a[0];

for(i=0;i<n;i++)

{

if(a[i]<y)

y=a[i];

}

printf("Minimum Value = %d",y);

getch();

}
 
