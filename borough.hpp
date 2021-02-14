#ifndef BOROUGH_
#define BOROUGH_
#include <iostream>
class borough
{
private:
    std::string hood;//neighborhood
    std::string name; //your name

public:
    borough(std::string myhood = "NULL" , std::string username = "No name added");
    virtual void show();
    std::string getname();
    void setname(std::string username);
    std::string gethood();
};




#endif