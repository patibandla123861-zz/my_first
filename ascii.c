#include<stdio.h>

void main()
{

int b;
char a[100]; 

printf("What's your name?");
scanf("%s", a);

printf("What's your coolness figure?");
scanf("%d", &b);

if(b<7)
printf("HEY, %s YOU ARE UNCOOL", a);

else
printf(" HEY, %s YOU ARE A DUDE", a);

}
