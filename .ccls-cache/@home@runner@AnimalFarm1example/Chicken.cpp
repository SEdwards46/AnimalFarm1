#include "Chicken.h"

void Chicken::eat(){
  Animal::showName();
  cout << " the chicken is eating." << endl;
  
}

void Chicken::gainWeight(int amount){
  Animal::gainWeight1(amount);
  
}