#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    if(a>b)
    return a-b;
    else
        return b-a;
}
int mul(int a, int b)
{
    return a*b;
}
float div(float a, float b)
{
    if(a>b)
        return a/b;
    else
        return b/a;
}
int main()
{
    float x,y;
    cin>>x>>y;
    cout<<"sum = "<<sum(x,y)<<endl;
    cout<<"subtraction = "<<sub(x,y)<<endl;
    cout<<"Multiplication = "<<mul(x,y)<<endl;
    cout.precision(3);
    cout<<"Division = "<<div(x,y)<<endl;
    return 0;
}
