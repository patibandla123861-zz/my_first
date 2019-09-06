#include<stdio.h>

int fact ();

void
main ()
{
  int a, b;
  printf ("Enter the number\n");
  scanf ("%d", &a);

  printf ("The value of facorial is %d", fact (a));
}

int
fact (int a)
{
  if (a == 1 || a == 0)
    return 1;
  else
    return a * fact (a - 1);
}
