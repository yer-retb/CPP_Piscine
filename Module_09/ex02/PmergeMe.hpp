#ifndef PMERGRME_HPP
#define PMERGRME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <sys/time.h>

class PmergeMe
{
    public :
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();

};

#endif
