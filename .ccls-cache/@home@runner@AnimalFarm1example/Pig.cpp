#include "Pig.h"

void Pig::eat(){
  Animal::showName();
  cout << " the pig is eating." << endl;
  
}

void Pig::gainWeight(int amount){
  Animal::gainWeight1(amount);
  
}