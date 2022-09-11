#include <stdio.h>

int main()
{
  char c;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
			c = '\n';
      putchar(c);
	}
}
