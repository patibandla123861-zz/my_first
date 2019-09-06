#include<stdio.h>
int add(int a,int b);
void main()
{
int a,b,c;
printf("Enter the numbers\n");
scanf("%d %d", &a,&b);

printf("The addition is %d",add(a,b));
}


int add(int a,int b)
{
if(!a)
return b;
else
return add(a^b,(a&b)<<1);
}
