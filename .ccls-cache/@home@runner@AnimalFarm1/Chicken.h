#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Chicken : public Animal {

public:
Chicken() : Animal() {}
Chicken(string n, int w) : Animal(n, w) {}
void eat();
void showSelf();
void speak();
int getTopWeight();
};