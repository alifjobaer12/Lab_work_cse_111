#include <iostream>
using namespace std;

class name
{
private:
    string fast_name,last_name;
public:
    friend int frnd(name);
};
int frnd(name b)
{
    cin>>b.fast_name>>b.last_name;
    cout<<endl<<"Fast name : "<<b.fast_name<<endl<<"Last name : "<<b.last_name<<endl;
    return 0;
}
int main()
{
    name a;
    frnd(a);
    return 0;
}
