#include "BitcoinExchange.hpp"

void	print_file_error()
{
	std::cout << "Error: could not open file." << std::endl;
	exit (2);
}

void	print_empty_error()
{
	std::cout <<"Error: empty file." << std::endl;
	exit (2);
}

void	print_arg_error()
{
	std::cout << "Error: bad arguments." << std::endl;
	exit (2);
}

void	print_input_error(std::string line)
{
	std::cout << "Error: bad input => " << line << std::endl;
}

void	print_number_error()
{
	std::cout << "Error: not a positive number." << std::endl;
}

void	print_large_error()
{
	std::cout << "Error: too large a number." << std::endl;
}

bool	is_digite(std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);  
	}
	return (true);
}

bool	valide_date(int y, int m, int d)
{
	if (y < 2009 || y > 2022 || m < 1 || m > 12 || d < 1 || d > 31)
		return (false);
	else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
		return (false);
	else if ((y != 2012 && y != 2016 && y != 2020) && m == 2 && d > 28)
		return (false);
	else if ((y == 2012 || y == 2016 || y == 2020) && m == 2 && d > 29)
		return (false);
	return (true);
}

bool	ft_Check_date(std::string &date, std::string &date2)
{
	std::stringstream s1(date);
	std::string tmp;
	int i = 0;
	int y , m , d = 0;
	while (!s1.eof())
	{
		std::getline(s1, tmp, '-');
		if (!is_digite(tmp))
			return (false);
		if (i == 0)
		{
			if (tmp.size() != 4)
				return (false);
			y = std::atoi(tmp.c_str());
		}
		else if (i == 1)
		{
			if (tmp.size() != 2)
				return (false);
			m = std::atoi(tmp.c_str());
		}
		else if (i == 2)
		{
			if (tmp.size() != 2)
				return (false);
			d = std::atoi(tmp.c_str());
		}
		else
			return (false);
		i++;
	}
		if(!valide_date(y, m, d))
			return (false);
		date2 = date;
	return (true);
}

bool	ft_check_num(std::string &str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	if (str.empty())
		return (false);
	while (str[i] != '\0')
	{
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != '-')
			return (false);
		if (str[i] == '.')
			j++;
		if (str[i] == '-')
			k++;
		i++;
	}
	if (j > 1 || k > 1)
		return (false);
	return (true);
}

bool	ft_check_amount(std::string str, float &prix)
{
	std::stringstream s1(str);
	float num;
	std::string tmp;
	while (!s1.eof())
	{
		std::stringstream ss;
		s1 >> tmp;
		
		std::getline (s1, tmp, '|');
		tmp.erase(0, 1);
		tmp.erase(tmp.size());
		if (!ft_check_num(tmp))
			return (false);
		ss << tmp;
		ss >> num;
	}
	prix = num;	
	return (true);
}

bool	ft_check_line(std::string &line, float &prix, std::string &date)
{
	std::stringstream str(line);
	std::string tmp;
	while (!str.eof())
	{
		str >> tmp;
		if (!ft_Check_date(tmp, date))
			return (false);
		if (std::getline(str, tmp, ','))
		{
			if (!ft_check_amount(tmp, prix))
				return (false);
		}
	}
	return (true);
}

bool	ft_check_prix(float prix)
{
	if (prix <= 0.0)
	{
		print_number_error();
		return (false);
	}
	if (prix > 1000.0000)
	{
		print_large_error();
		return (false);
	}
	return (true);
}

void	data_management (char *av)
{
	std::string datafile("data.csv");
	BitcoinExchange ex(datafile);
	std::ifstream file(av);
	std::string line;
	if (file.is_open())
	{
		std::string tmp;
		std::getline(file, tmp);
		if (tmp.empty())
			print_empty_error();
		while (std::getline(file, tmp))
		{
			float prix;
			std::string date;
			if (!ft_check_line(tmp, prix, date))
			{
				print_input_error(tmp);
				continue;
			}
			if (!ft_check_prix(prix))
				continue;
			std::cout << date << " => " << prix << " = " << ex.find_data(date, prix) <<std::endl;
		}
	}
	else
		print_file_error();
}

int main(int ac, char **av)
{
	if (ac != 2)
		print_arg_error();
	data_management(av[1]);
}