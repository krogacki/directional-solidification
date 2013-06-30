#include <cstdlib>
#include <iostream>
#include <sstream>

#include "Cell.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    Cell *initCell = new Cell();
    initCell->setCurrentTemp(1000);
    
    stringstream intToString;
    intToString << initCell->getCurrentTemp();
    cout << "I am hot as hell. I have " << intToString.str() << "C!\n";
    delete initCell;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
