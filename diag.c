#include<stdio.h>
void main()
{
	int a[10][10],i,j,n;
	printf("\n enter the square order");
	scanf("%d",&n);
	printf("enter the elements of matrix");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("the diagonal elements are\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j||i+j==(n-1))
printf("%3d",a[i][j]);
else
printf("  ");
}
printf("\n");
}
}

