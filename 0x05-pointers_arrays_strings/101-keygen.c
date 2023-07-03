/**
 * genRandomChar - TO generate rnandom char
 *
 * Return: Always (0)
 */
char genRandomChar()
{
	return (rand() % ('~' - '!')) + '!';
}
void genRandomPassword(char *password, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		password[i] = genRandomChar();
	}
	password[len] = '\0';
}
