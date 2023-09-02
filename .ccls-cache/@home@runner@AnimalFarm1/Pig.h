#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Pig : public Animal {

public:
Pig() : Animal() {} //constructor inherited from Animal class
Pig(string n, int w) : Animal(n, w) {} //parametrized constuctor inherited from Animal class
void eat(); //This one and three below it are all pure virtual functions
void showSelf();
void speak();
int getTopWeight();
};