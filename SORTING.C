/* Program to sort the elements of an Array in Ascending Order */

#include<stdio.h>

#include<conio.h>

void main()

{

int a[50],i,j,n,c;

clrscr();

printf("Enter number of elements in the array\n"); scanf("%d",&n);

printf("Enter elements of Array\n");

for(i=0;i<n;i=i+1)

{

scanf("%d",&a[i]);

}


for(i=0;i<n-1;i=i+1)

{

for(j=0;j<n-1;j=j+1)

{

if(a[j]>a[j+1])

{

c=a[j];

a[j]=a[j+1];

a[j+1]=c;

}

}

}

printf("The sorted Array is :\n");

for(i=0;i<n;i=i+1)

printf("{\t%d\t}\n",a[i]);

getch();

}
 
