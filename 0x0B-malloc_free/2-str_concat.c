#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates two strings.
* @s1: first string
* @s2: second string
*
* Return: a pointer to a newly allocated space in memory which
* contains the contents of s1, followed by the contents of s2,
* and null terminated. NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
  int i, j, len1, len2, len;
  char *result;

  len1 = len2 = 0;

  if (s1 != NULL)
  {
     i = 0;
     while (s1[i++] != '\0')
        len1++;
  }

  if (s2 != NULL)
  {
     i = 0;
     while (s2[i++] != '\0')
        len2++;
  }

  len = len1 + len2;
  result = (char *)malloc(sizeof(char) * (len + 1));
  if (result == NULL)
     return (NULL);

  for (i = 0; i < len1; i++)
     result[i] = s1[i];
  for (j = 0; j < len2; j++, i++)
     result[i] = s2[j];
  result[len] = '\0';

  return (result);
}


============= 3-alloc_grid.c ==============


#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of array
* @height: height of array
*
* Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
  int **array, i, j;
  int len = width * height;

  if (len <= 0)
     return (NULL);

  array = (int **)malloc(sizeof(int *) * height);
  if (array == NULL)
     return (NULL);

  for (i = 0; i < height; i++)
  {
     array[i] = (int *)malloc(sizeof(int) * width);
     if (array[i] == NULL)
     {
        for (i--; i >= 0; i--)
           free(array[i]);
        free(array);
        return (NULL);
     }
  }

  for (i = 0; i < height; i++)
     for (j = 0; j < width; j++)
        array[i][j] = 0;

  return (array);
}


=============== 4-free_grid.c =============

#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: the grid
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
  int i;

  for (i = 0; i < height; i++)
     free(grid[i]);
  free(grid);
}
