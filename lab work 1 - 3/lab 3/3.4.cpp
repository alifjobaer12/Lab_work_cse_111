#include<iostream>
using namespace std;

#define pi 3.1416

float area(float a)
{
    float ar;
    ar=pi*a*a;
    return ar;
}

int main()
{
    float r;
    cin>>r;
    cout<<area(r);
    return 0;
}
