#include <unistd.h>
/**
 * main - To write out a message
 * Return: Always 1
*/

int main() 
{
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, msg, sizeof(msg) - 1);
    return 1;
}
