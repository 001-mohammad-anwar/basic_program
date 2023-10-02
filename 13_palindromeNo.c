#include <stdio.h>

int main()
{
  int x, r, pl = 0, c;
  printf("Enetr a number:");
  scanf("%d", &x);
  c = x;

  while (x > 0)
  {

    r = x % 10;
    pl = pl * 10 + r;
    x = x / 10;
  }
  if (pl == c)
  {
    printf("number is palindrome");
  }
  else
  {
    printf("number is not palindrome");
  }
}