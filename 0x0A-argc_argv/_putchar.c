#include <stdio.h>
                
#include "main.h"
                
                
/**
                
 * _putchar - writes the character c to stdout
                
 * @c:Ther character to print
                
 *
                
 * Return: On success 1.
                
 * On error, -1 is returned and errno is set appropriately.
                
 */
                
int _putchar(char c)
                
{
                
return (write(1, &c, 1));
                
}
=============================
0-whatsmyname.c code
#include <stdio.h>
                
#include "main.h"
                
                
/**
                
 * main - prints the name of the program
                
 * @argc: number of arguments
                
 * @argv: array of arguments
                
 *
                
 * Return: Always 0 (Success)
                
 */
                
int main(int argc __attribute__((unused)), char *argv[])
                
{
                
        printf("%s\n", *argv);
                
                
        return (0);
                
}
