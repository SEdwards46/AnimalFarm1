#include "Barn.h"

Barn::Barn(){

        //add some chickens to coop vector
        coop.push_back(Chicken("Henrietta", 5));
        coop.push_back(Chicken("Ginger", 4));
        coop.push_back(Chicken("Chirpy", 3));

        //add some pigs to the pigpen vector
        pigPen.push_back(Pig("Porky", 100));
        pigPen.push_back(Pig("Babe", 80));
        pigPen.push_back(Pig("Wilbur", 120));

        //add some cows to the cowpen vector
        cowPen.push_back(Cow("Bessie", 500));
        cowPen.push_back(Cow("Daisy", 600));
        cowPen.push_back(Cow("MooMoo", 550));
}

//for each chicken object in the coop display eating statment, weight gained, and new weight
void Barn::feedChickens() {
        for (auto& chicken : coop) {
            chicken.eat();
            chicken.gainWeight(2);
        }
      cout << endl;
}

//for each pig object in the pigpen display eating statment, weight gained, and new weight
void Barn::feedPigs() {
        for (auto& pig : pigPen) {
            pig.eat();
            pig.gainWeight(3);
        }
      cout << endl;
}

//for each cow object in the cowpen display eating statment, weight gained, and new weight
void Barn::feedCows() {
        for (auto& cow : cowPen) {
            cow.eat();
            cow.gainWeight(5);
        }
      cout << endl;
}


