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


