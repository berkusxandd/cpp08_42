#ifndef EASYFIND_TPP
#define EASYFIND_TPP
#include "easyfind.hpp"
#include <algorithm>
#include <iterator>

const char *NoValueFoundExeption::what() const throw()
{
    return ("No value found in container that matches with the argument.");
}

template <typename T>
int easyfind(T const &container, int val)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), val);
    if (it == container.end())
        throw NoValueFoundExeption();
    return *it;
}
#endif