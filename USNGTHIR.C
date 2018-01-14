/* Program to store the sum of two arrays as a third array */ #include<stdio.h>

#include<conio.h>

void main()

{

int a[10],b[10],c[10],n,i;

clrscr();

printf("Enter the number of elements\n"); scanf("%d",&n);

printf("Enter the elements 1 st Array\n");

for(i=0;i<5;i++)

{

scanf("%d",&a[i]);

}

printf("Enter the elments of 2 nd array\n");

for(i=0;i<5;i++)

{

scanf("%d",&b[i]);

}

printf("SUM of two arrays =");

for(i=0;i<5;i++)

{ c[i]=a[i]+b[i]; printf("%d ",c[i]);

}

getch();

}
 
