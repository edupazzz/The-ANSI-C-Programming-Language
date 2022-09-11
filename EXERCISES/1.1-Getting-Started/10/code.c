/* Write a program to copy its input to its output, replacing each tab by \t , each
backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an
unambiguous way. */

#include <stdio.h>

void main(void)
{
	char char_var;

	while((char_var = getchar()) != EOF)
	{
		if(char_var == '\t'){ putchar('\\'); putchar('t'); }

		if(char_var == '\b'){ putchar('\\'); putchar('b'); }

		if(char_var == '\\'){	putchar('\\'); } 

		putchar(char_var);
	}
}
