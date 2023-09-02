#include <iostream>
#include <string>
#pragma once

using namespace std;

class Animal {
private:
string name;
int weight;
  
public:
Animal();
Animal(string n, int w);
virtual void speak() = 0;
virtual int getTopWeight() = 0;
virtual void eat() = 0;
virtual void showSelf() = 0;
string getName();
int getWeight();
void setName(string n);
void setWeight(int w);
};

