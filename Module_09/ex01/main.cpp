#include "RPN.hpp"

int main(int ac ,char **av)
{
    if (ac == 2)
        RPN(std::string(av[1]));
    else{
        std::cout << "Error : Wrong number of arguments." << std::endl;
    }
    return 0;
}