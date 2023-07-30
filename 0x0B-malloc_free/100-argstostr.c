#include "main.h"
/**
 **argstostr - function to concatenate all the argument of
 *your program
 *@ac: argument count
 *@av: argument array
 *
 *Return: To return string
 */
char *argstostr(int ac, char **av)
{
	int l = 0, m = ac, j, num = 0, tmp = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		num += (len(av[ac]) + 1);
	str = (char *) malloc(num + 1);
	if (str != NULL)
	{
		while (l < m)
		{
			for (j = 0; av[l][j] != '\0'; j++)
			{
				str[j + tmp] = av[l][j];
			}
			str[tmp + j] = '\n';
			tmp += (j + 1);
			l++;
		}
		str[tmp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (str);
}
/****************************** To GET LENGTH OF STRING *****************/
/**
 *len - return Length of string
 *@string: string numbers
 *Return: To return Length of string
 */
int len(char *string)
{
	int i = 0;

	if (string != NULL)
	{
		while (string[i])
			i++;
	}
	return (i);
}
