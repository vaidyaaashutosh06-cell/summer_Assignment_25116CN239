#include <stdio.h>

int main()
{
  int n;
  int i = 2;
  int largest_factor = 0;
  printf("Enter a number:");
  scanf("%d", &n);

  if (n <= 1)
  {
    printf("Largest prime factor is %d\n", n);
    return 0;
  }

  while (n > 1)
  {
    if (n % i == 0)
    {
      largest_factor = i;
      n = n / i;
    }
    else
    {
       i++;
    }
  }
  printf("The largest prime factor is %d", largest_factor);
  return 0;
}