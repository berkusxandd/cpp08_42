#include "Span.hpp"
#include <iostream>
Span::Span(unsigned int N) : _max_size(N), _size(0)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span & Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->_container = rhs._container;
        this->_max_size = rhs._max_size;
        this->_size = rhs._size;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int i)
{
    if (this->_size == _max_size)
        throw ContainerIsFullException();
    this->_container.push_back(i);
    this->_size++;
}

void Span::fillTheContainer()
{
    const int n_values = 10000;
    const int min_value = 0;
    const int max_value = 1000000;
    std::srand(std::time(0));
    for (int i = 0; i < n_values; i++)
    {
        int rand_num = min_value + std::rand() % (max_value - min_value + 1);
        if (this->_size < this->_max_size)
            this->addNumber(rand_num);
    }
}

int Span::shortestSpan()
{
    if (_size < 2)
        throw ContainerDoesntHaveEnoughValuesException();
    std::sort(getContainer().begin(), getContainer().end());
    return (*(++(getContainer().begin())) - getContainer().front());
}

int Span::longestSpan()
{
    if (_size < 2)
        throw ContainerDoesntHaveEnoughValuesException();
    std::sort(getContainer().begin(), getContainer().end());
    return (getContainer().back() - getContainer().front());
}

std::vector<int> &Span::getContainer()
{
    return (this->_container);
}

const char* Span::ContainerIsFullException::what() const throw()
{
    return ("This container has maximum amount of values.");
}

const char* Span::ContainerDoesntHaveEnoughValuesException::what() const throw()
{
    return ("This container does not have enough values ( < 2).");
}

