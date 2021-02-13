#ifndef BOROUGH_
#define BOROUGH_
#include <iostream>
class borough
{
private:
    std::string hood;
    std::string name;

public:
    borough(std::string myhood = "NULL" , std::string username = "No name added");
    ~borough();
    virtual void show();
    std::string getname();
    void setname(std::string username);
    std::string gethood();
};




#endif