#include "main.h" 
/**
* _strstr - finds a word in a string returns rest of string
* @haystack: string to search
* @needle: word to find
* Return: the new remainder of the string.
*/
char *_strstr(char *haystack, char *needle)
{
  int k = 0;
  int reset;
  char *resetneed = needle;

  while (*needle != '\0')
  {
    k++;
    needle++;
  }
  reset = k;
  needle = resetneed;
  while (*haystack != '\0')
    {
      if (k == 0)
        return haystack;
      
      if (*needle == *haystack)
      {
        k--;
        needle++;
   		} 
      else
      {
        k = reset;
        needle = resetneed;
      } 
      haystack++;
    }
  return NULL;
}
