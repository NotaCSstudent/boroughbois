#include "borough.hpp"
borough::borough(std::string myhood)    :  hood(myhood)     {}

borough::~borough()
{
    hood = "NULL";
}

void borough::show()
{
    std::cout << "Your neighborhood is " << hood << " ,NYC" << std::endl;
}


