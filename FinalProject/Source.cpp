#include <iostream>
#include <string>
// We include Headers.h here to gain access to the functions
#include "Header.h"

// Shouldn't be using this but am anyways
using namespace std;





int main()
{
    // Declarations
    string name;
    int year;
    // Calling functions with passed values
    intro(name, year);
    forLoop(name);
    pointers(name);
    games();
}