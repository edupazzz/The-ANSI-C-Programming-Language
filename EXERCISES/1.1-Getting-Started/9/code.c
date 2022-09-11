/* Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

#define NONBLANK '-'

int main()
{
	int char_var, last_char; 

	last_char = NONBLANK;

	while((char_var = getchar()) != EOF)
	{
		if(char_var == ' ')
		{		
			if(last_char != ' ')
				putchar(char_var);
		}
		else
			putchar(char_var);
		last_char = char_var;
	}

	return 0;
}
