#include "main.h"
/**
* _strcat - concats a string
* @dest - second string
* @src - first string
* Return: new string
*/
char *_strcat(char *dest, char *src)
{
  char temp = src;
  
  while (dest++)
		temp = temp + *dest;
  return (temp);
}
