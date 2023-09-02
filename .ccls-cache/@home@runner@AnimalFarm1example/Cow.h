#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Cow : public Animal {

public:
Cow() : Animal() {}
Cow(string n, int w) : Animal(n, w) {}
void eat();
void gainWeight(int amount);
};