/* Linear Search */

#include<stdio.h>

#include<conio.h>

void main()

{	

int a[10],i,n,x,flag=0;

clrscr();

printf("Enter the number of elements\n"); scanf("%d",&n);

printf("Enter the elements of array\n");

for(i=0;i<n;i++)

{

scanf("%d",&a[i]);

}

printf("Enter the element to be searched\n");

scanf("%d",&x);

for(i=0;i<5;i++)

{

if(a[i]==x)

{

flag=flag+1;

break;

}

}

if(flag==1)

printf("Element found\n");

else

printf("Element not found");

getch();

}
 
