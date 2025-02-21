#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <iostream>
class Span
{
    public:
        Span(unsigned int N);
        Span(Span const &src);
        Span &	operator=(Span const &rSym);
        ~Span();
        std::vector<int> getContainer() const;
        void addNumber(int i);
        void fillTheContainer();
        std::vector<int> &getContainer();
        int shortestSpan();
        int longestSpan();
    private:
        std::vector<int> _container;
        unsigned int _max_size;
        unsigned int _size;
    
    class ContainerIsFullException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class ContainerDoesntHaveEnoughValuesException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

#endif