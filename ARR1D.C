#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5][5],i,j,n,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the element of first matrix A\n");
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("sum of the diogonal element =%d\n",sum);
}