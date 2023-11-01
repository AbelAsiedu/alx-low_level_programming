#include <stdlib.h>
#include "main.h"

/**
 * count_word - Counts the number of words in a string
 * @s: String to evaluate
 * Return: Number of words
 */
int count_word(char *s)
{
	int flag = 0, w = 0;

	for (int c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w); // Return statement updated
}

/**
 * create_word - Creates a word from the string
 * @str: The input string
 * @start: The start index of the word
 * @end: The end index of the word
 * Return: The created word
 */
char *create_word(char *str, int start, int end)
{
	char *tmp = malloc(sizeof(char) * (end - start + 1));
	if (tmp == NULL)
		return (NULL); // Return statement updated

	for (int i = start; i < end; i++)
		tmp[i - start] = str[i];
	tmp[end - start] = '\0';

	return tmp;
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 * Return: Pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = create_word(str, start, end);
				if (tmp == NULL)
					return (NULL);
				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}

	matrix[k] = NULL;

	return (matrix);
}
