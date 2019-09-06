#include<stdio.h>

int mod();

void main()
{
int a,b,c;
printf("Enter the two numbers\n");
scanf("%d %d", &a,&b);
printf("The mod value is %d", mod(a,b));
}

int mod(int a,int b)
{
int c;
c=a%b;
return c;
}
