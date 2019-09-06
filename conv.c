#include<stdio.h>

void
main ()
{
  int a, b;
  char c, d;

  printf ("Enter the char");
  scanf ("%c", &c);

  a = c;
  b = a + 1 - 32;

  printf ("The next char is %c", b);

  if (c == 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O'
      || 'U');
  printf ("\nThe char is vowel");

}
