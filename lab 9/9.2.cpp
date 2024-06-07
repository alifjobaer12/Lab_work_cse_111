#include <iostream>
#include <cstdlib>
using namespace std;
class RandomNumber
{
public:
    void out()
    {
        char input='n';
        while (input == 'n' || input == 'N')
        {
            cin >> input;
            if (input == 'n' || input == 'N')
            {
                cout << "Random number: " << (rand() % 9 + 1) << endl;
            }
        }
    }
};

int main()
{
    RandomNumber rng;
    rng.out();
    return 0;
}

