#include "Chicken.h"

void Chicken::showSelf(){
  cout << getName() << " the Chicken";
}


void Chicken::eat(){
  setWeight(getWeight() + 2);
  cout << getName() << " is eating." << endl;
  cout << getName() << " the chicken gained " << 2 << " pounds" << endl;
  cout << getName() << " now weighs " << getWeight() << " pounds." << endl;
}

void Chicken::speak(){
  cout << "  Cluck" << endl;
  
}

int Chicken::getTopWeight(){
  return 12;
  
}

