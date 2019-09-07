#include<stdio.h>
#include<string.h>

void main()
{
char s[100]="satish";
char n[100]="navvulu";
char m[10];
//printf("before n: %s\n",n);
//printf("before m: %s\n",m);
printf("before n: %s\n",n);
strcat(n,s);
//strncpy(n,s,3);
//strcpy(m,n);
printf("after n: %s\n",n);
//printf("after m: %s\n",m);
//printf("after n: %s\n",n);
}
