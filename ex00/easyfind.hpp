#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stdexcept>
template <typename T>
int easyfind(T const & container, int val);

class NoValueFoundExeption : public std::exception
{
    virtual const char* what() const throw(); 
};

#endif