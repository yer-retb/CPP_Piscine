#include "BitcoinExchange.hpp"
BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(std::string &filename){

	std::ifstream file(filename.c_str());
	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			std::string key = line.substr(0, 10);
			float value = strtod (line.substr(11, line.length()).c_str(), NULL);
			this->_Map[key] = value;
		}
	}
	else
	{
		std::cout << "Error: File not found" << std::endl;
		exit(1);
	}
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){
	(void) other;
	return *this;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	(void) other;
}

float BitcoinExchange::find_data(std::string &date, float &amount)
{
	std::map<std::string, float>::iterator it = _Map.upper_bound(date);
	if (it != _Map.begin())
		it--;
	return(amount * it->second);

}