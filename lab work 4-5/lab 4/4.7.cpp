#include<iostream>
using namespace std;

#define p 3.1416

class Circle
{
    int r;
public:
    void computer_area( int a )
    {
        r=a;
        double area = r*r*p;
        cout<<area;
    }
};
int main()
{
    int n;
    cin>>n;
    Circle obj;
    obj.computer_area(n);

    return 0;
}

