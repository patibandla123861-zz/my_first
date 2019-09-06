#include<stdio.h>

void main()
{

int i,n;
printf("Who is India's Captain\n");

printf("1. Dhoni\n");
printf("2. Kohli\n");
printf("3. Ganguly\n");
printf("4. Smith\n");

printf("Enter your choice\n");
scanf("%d",&n);


switch(n)
{
case 1: printf("Sorry Dhoni was the ex-captain");
	break;

case 2: printf("1 karorrrrrr");
	break;

case 3: printf("Ye galat jawab hai");
	break;

case 4: printf("deviji ye galat jawab hai");
	break;

default: printf(" Select from given choice only");
	break;

}
}
