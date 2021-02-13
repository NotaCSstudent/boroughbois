#ifndef QUEENS_
#define QUEENS_


#include "borough.hpp"


class queens : public borough
{
public:
queens(std::string myhood = "NULL" , std::string username = "No name added");
void show();
};

#endif