#include "manhattan.hpp"


manhattan::manhattan(std::string username,std::string myhood) : borough(username,myhood) {}

void manhattan::show()
{
    std::cout << "This person is rich cause that person is in the city" << std::endl;
}