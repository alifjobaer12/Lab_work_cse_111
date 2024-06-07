#include<iostream>
using namespace std;
class box
{
public:
    int h,l,w;
    int set_data()
    {
        cin>>h>>l>>w;
        return 0;
    }
    int print_value()
    {
        cout<<h*l*w;
        return 0;
    }
};
int main()
{
    box a;
    a.set_data();
    a.print_value();
    return 0;
}
