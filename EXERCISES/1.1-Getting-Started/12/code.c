/* Write a program that prints its input one word per line. */

#include <stdio.h>

void main(void)
{
	int char_var;

	while((char_var = getchar()) != -1)
	{
		if(char_var == ' ') { char_var = '\n'; }
		putchar(char_var);
	}
}

