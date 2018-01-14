#include<conio.h>

#include<stdio.h>

#include<math.h>

void main()

{

float p,r,t,SI=0.0,CI=0.0,a=0.0;

clrscr();

printf("Enter Principle, Rate and Time \n");

scanf("%f%f%f",&p,&r,&t);

SI=(p*r*t)/100;

a=p*pow((1+r/100),t);

CI=a-p;

printf("Simple Interest = %f \nCompoun Interest = %f",SI,CI);

getch();

}
