#include<iostream>
using namespace std;
class person
{
    int age;
    string name;
public:
    void put_data()
    {
        cin>>name>>age;
    }
    void get_data()
    {
        cout<<endl<<name<<endl<<age<<endl;
    }
};
int main()
{
    person a;
    a.put_data();
    a.get_data();
    return 0;
}
