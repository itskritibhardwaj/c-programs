/* Program to Calculate Area and Circumference of a Circle */

#include<stdio.h>

#include<conio.h>

#define pie 3.14

void main()

{

float r,area=0.0,cir=0.0;

clrscr();

printf("Enter radius of circle : \n");

scanf("%f",&r);

area=pie*r*r;

cir=2*pie*r;

printf("Area = %f \nCircumference = %f",area,cir);

getch();

}
