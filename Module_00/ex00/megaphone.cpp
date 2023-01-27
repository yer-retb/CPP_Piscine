#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
	int	i = 1;
	int j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (std::isalpha(av[i][j]))
				std::cout << (char)std::toupper(av[i][j]);
			else
				std::cout << (char)av[i][j];
			j++;
		}
		i++;
	}
}
