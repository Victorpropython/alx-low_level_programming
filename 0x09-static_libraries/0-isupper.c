#include "main.h"
/**
 *_isupper - uppercase letters
 *@c: char variable
 *Return: 0 or !
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
