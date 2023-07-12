#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1:string s1
 * @s2:string s2
 *
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	/*
	 * int len1 = strlen(s1);
	 * int len2 = strlen(s2);
	 */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
