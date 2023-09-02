#include "Animal.h"

//constructor 
Animal::Animal(){
  name = "";
  weight = 0;
  
}

//paramaterized constructor
Animal::Animal(string n, int w){
  name = n;
  weight = w;
  
}

string Animal::getName(){
  return name;
  
}

int Animal::getWeight(){
  return weight;
  
}

void Animal::setName(string n){
  name = n;
  
}

void Animal::setWeight(int w){
  weight = w;
  
}

//show name for each animal
void Animal::showName(){
  cout << name;
  
}

//show weight gained and new weight for each animal
void Animal::gainWeight1(int amount){
  weight += amount;
  cout << name << " gained " << amount << " pound(s)." << endl;
  cout << name << " now weighs: " << weight << " pound(s)." << endl;
}