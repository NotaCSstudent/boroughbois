#include <iostream>
#include "borough.cpp"
#include "bronx.cpp"
#include "brooklyn.cpp"
#include "queens.cpp"
#include "manhattan.cpp"
#include <boost/algorithm/string.hpp>
using namespace std;

borough* place(std::string name = "No name added",std::string boro = "NULL",std::string town ="NULL",std::string trainline = "None")
{
    string lower_boro = boost::algorithm::to_lower_copy(boro);
    if(lower_boro == "bronx")
    {
       return new bronx(name,town,trainline);
    }
    else if(lower_boro == "manhattan")
    {
        
        return new manhattan(town);
    }
    else if(lower_boro == "brooklyn")
    {
        return new brooklyn(town);
    }
    else if(lower_boro == "queens")
    {
        return new queens(town);
    }
    else
    {
        return new borough("Null");
    }
    
}


int main()
{


borough* embee = place("embee","queens","times square");
embee->show();
}