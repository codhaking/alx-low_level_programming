#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print all the letters of alphabet in lowercase
* Return: Always 0
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
