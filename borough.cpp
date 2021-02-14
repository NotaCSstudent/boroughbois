#include "borough.hpp"

/*
borough::borough(std::string username,std::string myhood)
{
    name = username;
    hood = myhood;
}
*/





borough::borough(std::string username,std::string myhood)    :  name(username) , hood(myhood)   {}



void borough::show()
{
    std::cout << "Your neighborhood is " << hood << " ,NYC" << std::endl;
}

void borough::setname(std::string username)
{
    name = username;
}

std::string borough::getname()
{
    return name;
}

std::string borough::gethood()
{
    return hood;
}