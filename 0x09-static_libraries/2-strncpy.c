#include "main.h"
/**
 **_strncpy - To copy string characters
 *@dest: string variable 1
 *@src: String variable 2
 *@n: For int variable (number count)
 *
 *Return: To return copir=ed string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ans = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ans);
}
