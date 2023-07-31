#include "variadic_functions.h"
/**
 *print_all - a function that prints anything.
 *@arg: A list of arguments pointing to the
 *character to be printed
 */
void print_char(va_list arg)
{
	char alphas;

	alphas = va_arg(arg, int);

	printf("%c", alphas);
}

/**
 *print_int - Prints an int
 *@arg: A list of argument pointing to the
 *integer to be printed
 */
void print_int(va_list arg)
{
	int nums;

	nums = va_arg(arg, int);

	printf("%d", nums);
}

/**
 *print_float - To print floating point
 *@arg: Argument variable
 *of float to be printed
 */
void print_float(va_list arg)
{
	float fl;

	fl = va_arg(arg, double);
	printf("%f", fl);
}

/**
 *print_string - To print string
 *@arg: Argument variable of string
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 *print_all - prints  Anything
 *@format: format of input type
 *
 *Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list argus;
	int i = 0, j = 0;
	char *separator = "";

	printer_t funcs[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string}
	};

	va_start(argus, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(argus);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(argus);
}
