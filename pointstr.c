#include<stdio.h>
int str(char *p,char *q)
{
while(*q)
{
*p=*q;
*q++;
*p++;
}
*p='\0';
}

void main()
{
char p[20],q[20];
printf("\n enter the p string");
gets(p);
printf("\n enter the q string");
gets(q);
str(p,q);
printf("the p copied string is %s",p);
}


