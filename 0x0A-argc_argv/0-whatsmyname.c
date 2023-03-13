 #include <stdio.h>
/**
 * main - To print its name and any other name given to it
 * @argc: for argument count
 * @argv: for array count
 * Return: Aleays 0
 */
int main(argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
