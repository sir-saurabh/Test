#include<stdio.h>
int
main ()
{
  int a, b, c, sum, prod;
  printf ("Enter the number");
  scanf ("%d", &a);
  sum = 0;
  prod = 1;
  b = a;
  while (a != 0)
    {
      c = a % 10;
      prod *= c;
      sum += c;
      a /= 10;
    }
  if (sum == prod)
    printf ("%d is a spy no.", b);
  else
    printf ("%d is not a spy no.", b);

  return 0;
}
