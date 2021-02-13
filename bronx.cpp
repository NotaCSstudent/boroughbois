#include "bronx.hpp"


bronx::bronx(std::string username,std::string myhood) : borough(username,myhood) {}

void bronx::show()
{
    std::cout << getname() << " is from " << gethood() << " in the Bronx" << std::endl;
}