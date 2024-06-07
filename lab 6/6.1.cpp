#include<iostream>
using namespace std;

class shape
{
    int w,h;
public:
    void set_data(int x, int y)
    {
        x=w;
        y=h;
    }
    int calculation(int x, int y)
    {
        int area,p;
        area=x*y;
        cout<<"Area : "<<area<<endl;
        p=2*(x+y);
        cout<<"Perimeter : "<<p<<endl;
    }

};
int main()
{
    int a,b;
    shape o1,o2;
    cout<<"Enter value for rectangular :"<<endl;
    cin>>a>>b;
    o1.set_data(a,b);
    o1.calculation(a,b);
     cout<<"Enter value for squear :"<<endl;
    cin>>a;
    o2.set_data(a,a);
    o2.calculation(a,a);

    return 0;
}
