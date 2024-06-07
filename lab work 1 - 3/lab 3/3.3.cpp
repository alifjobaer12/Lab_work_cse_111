#include<iostream>
using namespace std;
int area(int a,int b)
{
    int ar;
    ar=a*b;
    return ar;
}
int main()
{
    int l,w;
    cout<<"enter the length and width: ";
    cin>>l>>w;
    cout<<"the area is: ";
    cout<<area(l,w)<<endl;
    return 0;
}

