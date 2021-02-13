#include <iostream>
#include "borough.hpp"
#include "bronx.hpp"
#include "brooklyn.hpp"
#include "queens.hpp"
#include "manhattan.hpp"
using namespace std;

int main()
{
    bronx Fordham("Fordham");
    queens Flushing("Flushing");
    brooklyn FlatBush("Flatbush");
    manhattan Flatiron("FlatIron");
    Fordham.show();
    Flushing.show();
    FlatBush.show();
    Flatiron.show();
}