#include "Cow.h"

void Cow::showSelf(){
  cout << getName() << " the Cow";
}

void Cow::eat(){
  setWeight(getWeight() + 35);
  cout << getName() << " is eating." << endl;
  cout << getName() << " the cow gained " << 35 << " pounds" << endl;
  cout << getName() << " now weighs " << getWeight() << " pounds." << endl;
  
}

void Cow::speak(){
  cout << "  Moo" << endl;
  
}

int Cow::getTopWeight(){
  return 1350;
  
}

