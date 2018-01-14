#include<stdio.h>
#include<conio.h>
void main()
{ 	int x,y;
	clrscr();
	printf("enter two numbers");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("\n value before swapping x=%d & y=%d",x,y);
	x= x+y;
	y= x-y;
	x=x-y;
	printf("\n value after swappimg x=%d and y=%d",x,y);
	getch();
}