#include "main.h"

/**
 *_islower  - check for lowercase character
 *@c: The chracter to be checked
 * Return: 1 for lowercase chracter or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
