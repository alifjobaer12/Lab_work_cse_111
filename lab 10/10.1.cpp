#include<iostream>
using namespace std;
class name
{
    string a;
public:
    void set_data()
    {
        getline(cin,a);
    }
    void print()
    {
        cout<<a<<" "<<endl;
    }
    name operator +(name x);
};
name name:: operator +(name x)
{
    name t;
    t.a=a+x.a;
    return t;
}
int main()
{
    name o,y,r;
    o.set_data();
    y.set_data();
    r=o+y;
    r.print();
    return 0;
}
