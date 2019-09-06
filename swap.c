#include<stdio.h>

void main()
{
int a=2;
int b=3;

printf("The value a is %d\n", a);
printf("The value b is %d\n", b);

//a^=b^=a^=b;
a=a^b;
b=a^b;
a=a^b;

printf("The new value a is %d\n", a);
printf("The new value b is %d\n", b);

}

