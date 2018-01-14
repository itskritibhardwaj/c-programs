/* To swap two numbers using a THIRD variable */

#include<conio.h>

#include<stdio.h>

void main()

{

int a,b,c=0;

clrscr();

printf("Enter two numbers \n");

scanf("%d%d",&a,&b);

c=b;/* The value of 'b' is now stored in 'c' */

b=a;/* The value of 'a' is now stored in 'b'. Thus 'b' is Swapped */ a=c;/* The value of 'c' is now stored in 'a'. Thus 'a' is Swapped */ printf("The swapped numbers are %d,%d",a,b); getch();

}
