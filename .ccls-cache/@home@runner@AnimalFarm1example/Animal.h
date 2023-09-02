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
string getName();
int getWeight();
void setName(string n);
void setWeight(int w);
void showName();
void gainWeight1(int amount);
};