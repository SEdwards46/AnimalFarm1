#include <vector>
#include "Chicken.h"
#include "Pig.h"
#include "Cow.h"

using namespace std;

class Barn {
private:
Animal* barn[15];

public:
Barn();
~Barn();
void feedAnimals();
void showBarn();
void outToPasture(); //Not used, may implement in the future
};
