#include <stdio.h>

void main(void)
{
  int c;

  while((c = getchar()) != EOF)
    putchar(c);
  if(c == EOF)
    printf("#EOF = %d\n", c);
}
