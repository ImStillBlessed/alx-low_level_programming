#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int count(char *string);
int lenght(char *strng, int position);
char **strtow(char *str);

//count the string...
//when the first word is foun
//find lenght to allocate mem.
//iterate through and store in new str1.
//add a null termunator.
//one step forward (to skio the space)
//iterate till the end into a new str2

/**
 * count - counts the num of spaces to string
 * @string: string to count.
 * Return: the position of the string.
 */
int count(char *string)
{
	int i = 0;

	while (*string != '\0')
	{
		if (string[i] != ' ')
			return (i);
		i++;
	}
	return (i);
}

/**
 * lenght - counts the lenght of the string
 * @stng: string to count
 * @position: begining index of the string.
 * Return: pointer to lenght of the string.
 */
int lenght(char *strng, int position)
{
	int i = 0;

	while (strng[position] != '\0')
	{
		if (strng[position] == ' ')
			return (i);
		position++;
		i++;
	}
	return (i);
}

/**
 * strtow - converts a string to two words.
 * @str: string to be split
 * Return: a printer to the two strings.
 */
char **strtow(char *str)
{
	char **returner;
	char *new_str1;
	char *new_str2;
	int pos1;
	int i = 0;
	int lenght1, lenght2;

	if (str == NULL)
		return (NULL);
	//count function//
	pos1 = count(str);
	//count lenght//
	lenght1 = lenght(str, pos1);
	//allocate mem
	new_str1 = malloc(sizeof(char) * lenght1 + 1);
	if (new_str1 == NULL)
	{
		return (NULL);
	}
	while (i < lenght1)
	{
		new_str1[i] = str[pos1];
		i++;
		pos1++;
	}
	new_str1[i] = '\0';
	pos1++;
	i = 0;
	//count lengh
	lenght2 = lenght(str, pos1);
	//allocate mem
	new_str2 = malloc(sizeof(char) * lenght2 + 1);
	if (new_str2 == NULL)
	{
		return (NULL);
	}
	while (str[pos1] != '\0')
	{
		new_str2[i] = str[pos1];
		i++;
		pos1++;
	}
	new_str2[i] = '\0';
	//add a return string
	returner = malloc(sizeof(char *) * 2);
	if (returner == NULL)
	{
		free(new_str1);
		free(new_str2);
		return (NULL);
	}
	returner[0] = new_str1;
	returner[1] = new_str2;
	//return
	return (returner);
}
