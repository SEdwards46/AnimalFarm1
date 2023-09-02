#include "Cow.h"

void Cow::eat(){
   Animal::showName();
   cout << " the cow is eating." << endl;
  
}

void Cow::gainWeight(int amount){
  Animal::gainWeight1(amount);
  
}