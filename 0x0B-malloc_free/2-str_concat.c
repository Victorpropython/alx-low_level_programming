#include "main.h"
/**
 **str_concat - function that concatenates two strings
 *@s1: newly allocated space in memory
 *@s2: newly allocated space in memory with a null terminator
 *Return: String on success or Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int tmp1 = 0, tmp2 = 0, i;
	char *dup;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[tmp1] != '\0')
	{
		tmp1++;
	}
	while (s2[tmp2] != '\0')
	{
		tmp2++;
	}
	dup = (char *)malloc((tmp1 + tmp2 + 1) * sizeof(char));
	if (dup == NULL)
		return ('\0');
	for (i = 0; i < tmp1; i++)
	{
		dup[i] = s1[i];
	}
	for (i = 0; i < tmp2; i++)
	{
		dup[tmp1 + i] = s2[i];
	}
	dup[tmp1 + tmp2] = '\0';
	return (dup);
}
