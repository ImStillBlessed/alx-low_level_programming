#include "main.h"

/**
* _strcat - concats a string
* @dest - second string
* @src - first string
* Return: new string
*/
char *_strcat(char *dest, char *src)
{
  int a = 0, i = 0;

  while (dest[i] != '\0')
    i++;
  
  while (src[a] != '\0')
  {
    dest = dest[i] + src[a];
    a++;
  }
  return (a);
  
}