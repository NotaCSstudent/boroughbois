#include "bronx.hpp"


bronx::bronx(std::string username,std::string myhood,std::string trainline) : borough(username,myhood) 
{
    train = trainline;
}

void bronx::show()
{
    std::cout << getname() << " is from " << gethood() << " in the Bronx " << train << std::endl;
}