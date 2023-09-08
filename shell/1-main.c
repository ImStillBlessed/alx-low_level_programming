#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac < 2)
		return (0);

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
