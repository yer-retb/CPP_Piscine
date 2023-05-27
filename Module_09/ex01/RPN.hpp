#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iostream>
#include <sstream>
#include <cstdlib>

class RPN
{
    private :
        std::stack<int> stack;
    
    public :
        RPN(std::string str);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        ~RPN();
};
#endif