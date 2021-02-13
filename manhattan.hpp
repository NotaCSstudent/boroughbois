#ifndef MANHATTAN_
#define MANHATTAN_


#include "borough.hpp"


class manhattan : public borough
{
public:
manhattan(std::string myhood = "NULL" , std::string username = "No name added");
void show();
};




#endif