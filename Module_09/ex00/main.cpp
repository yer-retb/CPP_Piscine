#include "BitcoinExchange.hpp"

void	print_error()
{
	std::cout << "error" << std::endl;
	exit (2);
}

void	data_management (char **av)
{
	
}

int main(int ac, char **av)
{
	if (ac != 2)
		print_error();
	data_management(av);
}