#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Pig : public Animal {

public:
Pig() : Animal() {}
Pig(string n, int w) : Animal(n, w) {}
void eat();
void gainWeight(int amount);
};