#include<iostream>
using namespace std;
class Rectangle
{
    int length, width;
public:
    Rectangle(int l, int w)
    {
        length=l;
        width=w;
        cout<<"The area is : "<<getArea(length,width)<<endl;
    }
    int getArea(int len, int wid)
    {
        return length*width;
    }
};
int main()
{
    int a,b;
    cin>>a>>b;
    Rectangle obj(a,b);
    return 0;
}

