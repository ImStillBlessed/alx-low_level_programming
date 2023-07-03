#include "main.h"
/**
* _strspn - returns the number of bytes when a character not in 
* original string is found
* @s1: first string to check
* @s2: second string of values to check
* Return: the bytes of value when unknown found
*/
unsigned int _strspn(char *s, char *accept)
{
  for (int i = 1 ; s ; s++)
  {
		while (accept)
      {
        if (accept != s) 
          return i;
        else
        {
          i++;
          accept++
        }
      } 
  } 

}
