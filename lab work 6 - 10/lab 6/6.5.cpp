#include<iostream>
using namespace std;

class Rectangle
{
    float w,h;
public:
    void data()
    {
        cin>>w>>h;
    }
    int calculate_area()
    {
        float a;
        a=w*h;
        cout<<a<<endl;
        return 0;
    }
    int calculate_perimeter()
    {
        float p;
        p=2*(w+h);
        cout<<p<<endl;
        return 0;
    }
};
int main()
{
    Rectangle a;
    a.data();
    cout.precision(5);
    a.calculate_area();
    a.calculate_perimeter();
    return 0;
}
