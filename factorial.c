#include <stdio.h>

/* Function that calculates the factorial of a number */
int factorial(int n)
{
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main(void)
{
  int num, result;

  printf("Enter a number: ");
  scanf("%d", &num);

  result = factorial(num);
  printf("%d! = %d\n", num, result);

  return 0;
}

