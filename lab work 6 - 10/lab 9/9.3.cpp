#include <iostream>
using namespace std;
class Mammals
{
public:
    void sayIAmMammal()
    {
        cout << "I am a mammal." << endl;
    }
};
class MarineAnimals
{
public:
    void sayIAmMarineAnimal()
    {
        cout << "I am a marine animal." << endl;
    }
};
class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void sayIAmBlueWhale()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals." <<endl;
    }
};
int main()
{
    Mammals mammal;
    MarineAnimals marineAnimal;
    BlueWhale blueWhale;
    mammal.sayIAmMammal();
    marineAnimal.sayIAmMarineAnimal();
    blueWhale.sayIAmBlueWhale();
    blueWhale.sayIAmMammal();
    blueWhale.sayIAmMarineAnimal();
    return 0;
}

