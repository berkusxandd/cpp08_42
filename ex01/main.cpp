#include "Span.hpp"
#include <iostream>
void print_span(Span &span)
{
    std::vector<int>::iterator it = span.getContainer().begin();
    for (;it!=span.getContainer().end(); it++)
    {
        std::cout << *it << ",";
    }
}

int main()
{
    Span span(15);
    span.fillTheContainer();
    std::cout << "\n";
    std::cout << "Shortest: " <<span.shortestSpan() << std::endl;
    std::cout << "Longest: " <<span.longestSpan() << std::endl;
    print_span(span);
}