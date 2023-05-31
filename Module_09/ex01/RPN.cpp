#include "RPN.hpp"

void    ft_check_content(std::string str)
{
    size_t i = 0;
    while (i < str.length()){
        if (str[i] != ' ' && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && !isdigit(str[i]))
        {
            std::cout << "Error: invalide input." << std::endl;
            exit (2);
        }
        i++;
    }
}

// void    print_stack(std::stack<int> st)
// {
//     while (!st.empty())
//     {
//         std::cout << st.top() << std::endl;
//         st.pop();
//     }
// }

RPN::RPN(std::string str)
{
    ft_check_content(str);

    size_t i = 0;
    while (i < str.length())
    {
        if (isdigit(str[i]))
            stack.push(str[i] - '0');
        else if (str[i] != ' ')
        {
            int x = stack.top();
            stack.pop();
            int y = stack.top();
            stack.pop();
			if (stack.empty())
			{
				std::cout << "Error: can't execute this operation" << std::endl;
				exit(2);
			}
            if (str[i] == '+')
                stack.push(y + x);
            else if (str[i] == '-')
                stack.push(y - x);
            else if (str[i] == '*')
                stack.push(y * x);
            else if (str[i] == '/')
            {
                if (!x)
                {
                    std::cout << "Error: Cannot be divided by 0." << std::endl;
                    exit (2);
                }
                stack.push(y / x);
            }
        }
        i++;
    }
    std::cout << stack.top() << std::endl;
}


RPN::~RPN(){
}

RPN::RPN(const RPN &other){
    *this = other;
}

RPN &RPN::operator=(const RPN &other){
    (void)other;
    return *this;
}