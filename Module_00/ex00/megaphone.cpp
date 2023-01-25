#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
	int	i = 1;
	int j;

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (isalpha(av[i][j]))
				std::cout << (char)toupper(av[i][j]);
			else
				std::cout << (char)av[i][j];
			j++;
		}
		i++;
	}
}
