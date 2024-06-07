#include<iostream>
using namespace std;
class name
{
    int a;
public:
    void set_data()
    {
        cin>>a;
    }
    void print()
    {
        cout<<a<<" "<<endl;
    }
    name operator +(name x);
    name operator *(name x);
};
name name:: operator +(name x)
{
    name t;
    t.a=a+x.a;
    return t;
}
name name:: operator *(name x)
{
    name t;
    t.a=a*x.a;
    return t;
}
int main()
{
    name o1,o2,o3,o4;
    o1.set_data();
    o2.set_data();
    o3.set_data();
   o4=(o1*o2)+o3;
    o4.print();
    return 0;
}
