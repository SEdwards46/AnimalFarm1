#include "Pig.h"

void Pig::showSelf(){
  cout << getName() << " the Pig";
}

void Pig::eat(){
  setWeight(getWeight() + 5); //5 is amount of weight being eaten 
  cout << getName() << " is eating." << endl;
  cout << getName() << " the pig gained " << 5 << " pounds" << endl;
  cout << getName() << " now weighs " << getWeight() << " pounds." << endl;
  
}

void Pig::speak(){
  cout << "  Oink" << endl;
  
}

int Pig::getTopWeight(){ 
  return 280; //top weight (or limit)
  
}

