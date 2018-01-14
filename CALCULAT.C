/* Program to stimulate a calculator */

#include<conio.h>

#include<stdio.h>

void main()

{

int a,b;

float r=0.0;

char ch;

clrscr();

printf("Enter an Operator\n");

scanf("%c",&ch);

printf("Enter two Operands\n");

scanf("%d%d",&a,&b);

switch(ch)

{

case '+': r=a+b;

printf("Result = %f",r);

break;

case '-': r=a-b;

printf("Result = %f",r);

break;

case '*': r=a*b;

printf("Result = %f",r);

break;

case '/': r=(float)a/b;

printf("Result = %f",r);

break;

default : printf("Wrong Choice");

}

getch();

}
