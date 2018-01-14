/* Program to add and multiply two matrices on order NxN */

#include<stdio.h>

#include<conio.h>

void main()

{

int a[5][5],b[5][5],c[5][5],n,i,j,k;

clrscr();

printf("Enter order of the matrix\n");

scanf("%d",&n);

printf("Enter the elements of the first matrix\n");

for(i=0;i<n;i=i+1)

{

for(j=0;j<n;j=j+1)

scanf("%d",&a[i][j]);

}

printf("Enter the elements of the second matrix\n");

for(i=0;i<n;i=i+1)

{

for(j=0;j<n;j=j+1)

scanf("%d",&b[i][j]);

}

/* Addition of matrices */

for(i=0;i<n;i=i+1)

{

for(j=0;j<n;j=j+1)

c[i][j]=a[i][j]+b[i][j];

}

printf("Sum of the matrices is:\n");

for(i=0;i<n;i=i+1)

{

for(j=0;j<n;j=j+1)

printf("%d ",c[i][j]);

printf("\n");
 
}


/* Multiplication of matrices */

for(i=0;i<n;i=i+1)

{

for(j=0;j<n;j=j+1)

{

c[i][j]=0;

for(k=0;k<n;k=k+1)

{

c[i][j]=c[i][j]+a[i][k]*b[k][j];

}

}

}

printf("Multiplication of the matrices is:\n");

for(i=0;i<n;i=i+1)

{

for(j=0;j<n;j=j+1)

printf("%d ",c[i][j]);

printf("\n");

}


getch();

}
 
