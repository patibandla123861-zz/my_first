/*#include<stdio.h>

void main()
{

int i,j,n,k;
printf("Enter the number of lines");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
printf(" ");
for(k=i;k>=1;k--)
printf("*");
printf("\n");
}
}
*/

#include<stdio.h>

void main()
{

int i,j,n,k;
printf("Enter the number of lines");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if(i+j>=n)
printf("*");
else
printf(" ");
}
printf("\n");
}
}










