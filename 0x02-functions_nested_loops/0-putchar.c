#include <unistd.h>
#include "main.h"

/**
* main - Check decription
* Description: It prints the Putchar, followed by a new line.
* Return: 0.
*/
int main(void)
{
	char word[7] = "Putchar";
	int i;

	for (i = 0; i < 7; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
