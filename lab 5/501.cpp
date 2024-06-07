#include<iostream>
using namespace std;
class Person
{
    string name,country;
    int age;
public:
    int set_data()
    {
        cin>>name>>age>>country;
        return 0;
    }
    int get_data()
    {
        cout<<name<<endl<<age<<endl<<country<<endl;
    }
};
int main()
{
    Person a;
    a.set_data();
    a.get_data();
    return 0;
}
