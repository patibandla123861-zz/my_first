#include<stdio.h>
#include<string.h>

/*void main()
{
char s[10]="satish";
char n[10]="navvulu";
char m[10];
printf("before n: %s\n",n);
printf("before m: %s\n",m);
printf("before n: %s\n",n);
strcat(n,s);
strncpy(n,s,3);
strcpy(m,n);
printf("after n: %s\n",n);
printf("after m: %s\n",m);
printf("after n: %s\n",n);
}*/

void main()
{
char b[10],c[4],a[]="Hello world",d[]="Good Morning";
memset(a+3,'.',3*sizeof(char));
printf("After memset():  %s\n",a);
printf("%s\n",strstr(d,"Morn"));

}
