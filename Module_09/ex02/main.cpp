#include "PmergeMe.hpp"
#include <cstdio>

bool    t = false;
int     tmp;

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void    ft_check_ac(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Erorr:" << std::endl;
		exit(2);
	}
	else if (ac == 2)
	{
		std::cout << "Erorr: can't sort one element." << std::endl;
		exit(2);
	}
    std::string str = "1 2 3 4 5 6 7 8 9 0";

    for (int i = 1; i < ac; i++)
    {
		for(int j = 0; j < ft_strlen(av[i]); j++)
        {
			size_t result = str.find(av[i][j]);
        	if (result == std::string::npos)
        	{
        	    std::cout << "Erorr: input invalid." << std::endl;
        	    exit (2);
        	}
		}
    }
}

void    ft_check_numbers(char *s1, char *s2)
{
    if (std::atoi(s1) < 0 || std::atoi(s2) < 0)
    {
        std::cout << "Error: negative value." << std::endl;
        exit(2);
    }
}

void    vector_sort(int ac, std::vector<std::pair<int, int> > v)
{
    struct timeval start, end;
    long           secound, micro;

    gettimeofday(&start, NULL);
    for(size_t i = 0; i < v.size(); i++)
    {
        if (v[i].first > v[i].second)
            std::swap(v[i].first, v[i].second);
    }
    std::vector<int> tmp_v1, tmp_v2;

	for (size_t i = 0; i < (v.size()); i++)
		tmp_v1.insert(std::upper_bound(tmp_v1.begin(), tmp_v1.end(), v[i].first), v[i].first);
		
    for(size_t i = 0; i < v.size(); i++)
        tmp_v2.push_back(v[i].second);

    for(size_t i = 0; i < tmp_v2.size(); i++)
        tmp_v1.insert(std::upper_bound(tmp_v1.begin(), tmp_v1.end(), tmp_v2[i]), tmp_v2[i]);
    if (t == true)
        tmp_v1.insert(std::upper_bound(tmp_v1.begin(), tmp_v1.end(), tmp), tmp);

    gettimeofday(&end, NULL);
    std::cout << "\nAfter : ";
    for(size_t i = 0; i < tmp_v1.size(); i++)
        std::cout << tmp_v1[i] << " " ;
    secound = end.tv_sec - start.tv_sec;
    micro = end.tv_usec - start.tv_usec;
    long time_val = (secound / 1000000) + (micro);
    std::cout << "\nTime to process a range of " << ac << " elements with std::vector : " << time_val << " us." << std::endl;
}

void    deque_sort(int ac, std::deque<std::pair<int, int> > d)
{
    struct timeval start, end;
    long           secound, micro;

    gettimeofday(&start, NULL);
    for(size_t i = 0; i < d.size(); i++)
    {
        if (d[i].first > d[i].second)
            std::swap(d[i].first, d[i].second);
    }
    std::deque<int> tmp_d1, tmp_d2;

    for(size_t i = 0; i < d.size(); i++)
        tmp_d1.push_back(d[i].first);

    for(size_t i = 0; i < d.size(); i++)
        tmp_d2.push_back(d[i].second);

    for (size_t i = 0; i < (d.size()); i++)
		tmp_d1.insert(std::upper_bound(tmp_d1.begin(), tmp_d1.end(), d[i].first), d[i].first);

    for(size_t i = 0; i < tmp_d2.size(); i++)
        tmp_d1.insert(std::upper_bound(tmp_d1.begin(), tmp_d1.end(), tmp_d2[i]), tmp_d2[i]);
    if (t == true)
        tmp_d1.insert(std::upper_bound(tmp_d1.begin(), tmp_d1.end(), tmp), tmp);

    gettimeofday(&end, NULL);
    secound = end.tv_sec - start.tv_sec;
    micro = end.tv_usec - start.tv_usec;
    long time_val = (secound / 1000000) + (micro);
    std::cout << "Time to process a range of " << ac << " elements with std::deque : " << time_val << " us." << std::endl;
}


int main(int ac, char **av)
{
    ft_check_ac(ac, av);
    std::cout << "Before : ";
    if (ac < 6)
    {
		int i = 0;
        while (++i < ac)
			std::cout << av[i] << " ";  
    }
    else
    {
        for(int i = 1; i < 6; i++)
            std::cout << av[i] << " ";
        std::cout << "[...]";
    }
    if ((ac - 1) % 2 != 0)
    {
        t = true;
        tmp = std::atoi(av[ac - 1]);
        if (tmp < 0)
        {
            std::cout << "Error: negative value." << std::endl;
            exit(2);
        }
        ac -= 1;
    }

    std::vector<std::pair<int, int> > v;
    for(int i = 1; i < ac; i+=2)
    {
        if (isdigit(*av[i]))
        {
            ft_check_numbers(av[i], av[i + 1]);
            v.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
        }
    }
    vector_sort(ac, v);

    std::deque<std::pair<int, int> > d;
    for(int i = 1; i < ac; i+=2)
    {
        if (isdigit(*av[i]))
            d.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
    }
    deque_sort(ac, d);
}
