/* To input marks in 5 subjects and find percentage and grade. */

#include<conio.h>

#include<stdio.h>

void main()

{

int m1,m2,m3,m4,m5;

float p=0.0;

clrscr();

printf("Enter marks of 5 subjects\n"); scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5); p=(m1+m2+m3+m4+m5)/5.0;

if(p<=100&&p>=90)

printf("Grade A");

else if(p>=70)

printf("Grade B");

else if(p>=60)

printf("Grade C");

else

printf("Grade D");

getch();

}
