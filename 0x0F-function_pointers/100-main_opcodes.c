#include <stdio.h>
#include <stdlib.h>

/**
*main -  program that prints the opcodes of its own main function.
*@argc: number of arguments passed to the program
*@argv: array of arguments
*
*Return: on success, 1 or 2 in case of failure
*/

int main(int argc, char *argv[])
{

int ind, byt;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

byt = atoi(argv[1]);

if (byt < 0)
{
printf("Error\n");
exit(2);
}

for (ind = 0; ind <  byt; ind++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (ind == byt - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
