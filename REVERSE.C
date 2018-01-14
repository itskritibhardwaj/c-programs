/* Program to print Reverse of a number */

#include<stdio.h>

#include<conio.h>

void main()

{

int num,rnum=0,r;

clrscr();

printf("Enter a number\n");

scanf("%d",&num);


while(num!=0)

{

r=num%10;

rnum=rnum*10+r;

num=num/10;

}


printf("The reverse number is = %d",rnum);

getch();

}
