/* To find greatest among three numbers. */

#include<stdio.h>

#include<conio.h>

void main()

{

int a,b,c;

clrscr();

printf("Enter three numbers \n");

scanf("%d%d%d",&a,&b,&c);

if(a==b&&a==c)

printf("All are equal");

else if(a>=b&&a>=c)

printf("%d is biggest",a);

else if(b>=c)

printf("%d is biggest",b);

else

printf("%d is biggest",c);

getch();

}
