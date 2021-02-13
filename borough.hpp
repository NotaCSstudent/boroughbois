#ifndef BOROUGH_
#define BOROUGH_
#include <iostream>
class borough
{
private:
    std::string hood;

public:
    borough(std::string myhood = "NULL");
    ~borough();
    void show();
};




#endif