#include<stdio.h>
void ans(int n)
{
if(n>0)
{
printf("%d\n",n);
ans(n-1);
printf("%d\n",n);
}
}

int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
ans(a);
return 0;
} 
