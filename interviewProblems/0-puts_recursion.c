#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s+1);
}

int main(void)
{
	    _puts_recursion("Betty Holberton");
	        return (0);
}