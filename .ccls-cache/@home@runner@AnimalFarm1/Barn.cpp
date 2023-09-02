#include "Barn.h"


Barn::Barn(){

        //add some chickens to barn
        barn[0] = new Chicken("Henrietta", 11);
        barn[1] = new Chicken("Ginger", 2);
        barn[2] = new Chicken("Chirpy", 3);
        barn[3] = new Chicken("Gus", 7);
        barn[4] = new Chicken("Brian", 6);
        
        //add some pigs to barn
        barn[5] = new Pig("Pork", 279);
        barn[6] = new Pig("Ham", 50);
        barn[7] = new Pig("Pancake", 75);
        barn[8] = new Pig("Rick", 80);
        barn[9] = new Pig("Bobby", 180);

        //add some cows to barn
         barn[10] = new Cow("Steak", 1349);
         barn[11] = new Cow("Buddy", 600);
         barn[12] = new Cow("Jones", 564);
         barn[13] = new Cow("Man", 400);
         barn[14] = new Cow("Dog", 400);
}

Barn::~Barn(){ //destructor
  for(int i = 0; i < 15; i++){ //for each object in barn delete
        delete barn[i];
      }
}

//Feeds all the animals in the barn and checks to see if new weight is over the limit
void Barn::feedAnimals(){
  string oldName; //varible created to be assigned to name of animal before it is sent pasture
  
  for(int i = 0; i < 15; i++){ //iterate through all the animals in the barn
    barn[i]->eat(); //animal will eat whatever is specific to them
    if (barn[i]->getWeight() >= barn[i]->getTopWeight()) { //if weight is higher than top weight
      if(dynamic_cast<Chicken*>(barn[i])){
        cout << barn[i]->getName() << " the chicken is put out to pasture." << endl;
        oldName = barn[i]->getName();
        barn[i] = new Chicken("Terry", 1);
        cout << oldName << " was replaced with Terry" << endl;
      }
      else if(dynamic_cast<Pig*>(barn[i])){
        cout << barn[i]->getName() << " the pig is put out to pasture." << endl;
        oldName = barn[i]->getName();
        barn[i] = new Pig("Mark", 10);
        cout << oldName << " was replaced with Mark" << endl;
      }
      else if(dynamic_cast<Cow*>(barn[i])){
        cout << barn[i]->getName() << " the cow is put out to pasture." << endl;
        oldName = barn[i]->getName();
        barn[i] = new Cow("Grace", 100);
        cout << oldName << " was replaced with Grace" << endl;
      }
  }
    cout << endl;
 }
}


void Barn::showBarn(){
  cout << "BARN CONTAINS:" << endl; //Opening and ending screen, shows all of objects in barn
  for(int i = 0; i < 15; i++){
    barn[i]->showSelf(); //name and type 
    barn[i]->speak(); //noise 
  }
  cout << endl;
}

