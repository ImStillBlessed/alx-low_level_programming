#include "main.h"

/**
 * leet - codes to 1337
 * @str: string to ecode
 * Return: the encoded string
*/
char *leet(char *str)
{
        int a = 0;
        int i;

        char letters[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
        char nums[10] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

        while (str[a])
        {
                for (i = 0; i < 10; i++)
                {
                        if (str[a] == letters[i])
                        {
                                str[a] = nums[i];
                        }
                }
                a++;
        }
        return str;
}