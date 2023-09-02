#include <vector>
#include "Chicken.h"
#include "Pig.h"
#include "Cow.h"

using namespace std;

class Barn {
private:
vector<Chicken> coop;
vector<Pig> pigPen;
vector<Cow> cowPen;

public:
Barn();
void feedChickens();
void feedPigs();
void feedCows();
};