#include<stdio.h>
void swap(int *a,int *b)
{

*a=*a^*b;
*b=*b^*a;
*a=*a^*b;

}

void main()
{

int a=73,b=82;
printf("pre swap:a=%d b=%d\n",a,b);
swap(&a,&b);
printf("post swap:a=%d b=%d\n",a,b);
}
