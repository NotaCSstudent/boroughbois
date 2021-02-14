#ifndef BRONX_
#define BRONX_
#include "borough.hpp"


class bronx : public borough
{   
    private:
    std::string train;
    public:
    bronx(std::string myhood = "NULL" , std::string username = "No name added",std::string trainline = "No train added");
    void show();
};




#endif