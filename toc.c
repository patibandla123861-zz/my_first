#include<stdio.h>
int checkwin (char a[][3]);
void print (char a[][3]);
void
main ()
{
  char a[3][3];
  int x, y, k, l, win = 0, i = 1;
  for (k = 0; k < 3; k++)
    {
      for (l = 0; l < 3; l++)
	{
	  a[k][l] = '_';
	}

    }

  while (i <= 9)
    {
      k = 0;
      l = 0;
      while (k == 0)
	{
	  printf ("\nPlayer 1 enter a cordinate (x,y) to mark 0: ");
	  scanf ("%d %d", &x, &y);
	  if (x < 0 || x > 2 || y < 0 || y > 2)
	    printf ("Enter correct coordinates: ");
	  else if (a[x][y] == '_')
	    {
	      a[x][y] = '0';
	      k = 1;
	    }
	  else
	    {
	      printf ("Already marked please enter other coordinate! \n");
	    }
	}


      print (a);
      win = checkwin (a);
      if (win == 1)
	{
	  printf ("Player 1 wins");
	  break;
	}
      i++;
      if (i > 9)
	{
	  break;
	}

      while (l == 0)
	{
	  printf ("\nPlayer 2 enter a cordinate (x,y) to mark *: ");
	  scanf ("%d %d", &x, &y);
	  if (x < 0 || x > 2 || y < 0 || y > 2)
	    printf ("Enter correct coordinates: ");
	  else if (a[x][y] == '_')
	    {
	      a[x][y] = '*';
	      l = 1;
	    }
	  else
	    {
	      printf ("Already marked please enter other coordinate! \n");
	    }
	}
      print (a);
      win = checkwin (a);

      if (win == 2)
	{
	  printf ("Player 2 wins");
	  break;
	}
      i++;
    }
  if (win == 0)
    printf ("Tie!  ");
  printf ("\nGame over");
}

int
checkwin (char a[][3])
{
  int win = 0;
  if (a[0][0] == '0' && a[1][0] == '0' && a[2][0] == '0')
    win = 1;
  else if (a[0][1] == '0' && a[1][1] == '0' && a[2][1] == '0')
    win = 1;
  else if (a[0][2] == '0' && a[1][2] == '0' && a[2][2] == '0')
    win = 1;
  else if (a[0][0] == '0' && a[0][1] == '0' && a[0][2] == '0')
    win = 1;
  else if (a[1][0] == '0' && a[1][1] == '0' && a[1][2] == '0')
    win = 1;
  else if (a[2][0] == '0' && a[2][1] == '0' && a[2][2] == '0')
    win = 1;
  else if (a[0][0] == '0' && a[1][1] == '0' && a[2][2] == '0')
    win = 1;
  else if (a[0][2] == '0' && a[1][1] == '0' && a[2][0] == '0')
    win = 1;
  else if (a[0][0] == '*' && a[1][0] == '*' && a[2][0] == '*')
    win = 2;
  else if (a[0][1] == '*' && a[1][1] == '*' && a[2][1] == '*')
    win = 2;
  else if (a[0][2] == '*' && a[1][2] == '*' && a[2][2] == '*')
    win = 2;
  else if (a[0][0] == '*' && a[0][1] == '*' && a[0][2] == '*')
    win = 2;
  else if (a[1][0] == '*' && a[1][1] == '*' && a[1][2] == '*')
    win = 2;
  else if (a[2][0] == '*' && a[2][1] == '*' && a[2][2] == '*')
    win = 2;
  else if (a[0][0] == '*' && a[1][1] == '*' && a[2][2] == '*')
    win = 2;
  else if (a[0][2] == '*' && a[1][1] == '*' && a[2][0] == '*')
    win = 2;
  else
    win = 0;
  return win;
}

void
print (char a[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("%c  ", a[i][j]);
	}
      printf ("\n");
    }
}
