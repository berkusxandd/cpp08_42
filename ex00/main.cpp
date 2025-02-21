#include "easyfind.tpp"
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
int main()
{
    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 0; i < 100; i++)
    {
        vec.push_back(i);
        lst.push_back(i);
    }

    try 
    {
        int found = easyfind(vec, 99);
        std::cout << "Found in vector: " << found << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        int found = easyfind(vec, 100);
        std::cout << "Found in vector: " << found << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        int found = easyfind(vec, 99);
        std::cout << "Found in vector: " << found << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        int found = easyfind(lst, -100);
        std::cout << "Found in list: " << found << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        int found = easyfind(lst, 35);
        std::cout << "Found in list: " << found << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }

}