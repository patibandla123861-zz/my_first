#include<stdio.h>
void main()
{
int a[]={10,20,30,40,50};
int *p[]={a,a+1,a+2,a+3,a+4};
int **pp=p;
printf("%d %d %d",pp-p,*pp-a,**pp);
}
