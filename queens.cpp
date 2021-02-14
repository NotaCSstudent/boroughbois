#include "queens.hpp"


queens::queens(std::string username,std::string myhood) 
{
    borough(username,myhood); 
}

void queens::show()
{
    std::cout << "This person is from Queens" << std::endl;
}

