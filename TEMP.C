/* To convert degree Celsius to degree Fahrenheit */

#include<stdio.h>

#include<conio.h>

void main()

{

float c,f=0;

clrscr();

printf("Enter temperature in degree Celsius \n");

scanf("%f",&c);

f=(c*9)/5+32;

printf("%f degree Celsius in degree Fahrenheit is = %f",c,f);

getch();

}
