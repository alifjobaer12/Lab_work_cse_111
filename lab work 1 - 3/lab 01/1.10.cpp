#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b&&a>c)
        cout<<a<<" is larger";
    else if (b>c&&b>a)
        cout<<b<<" is largest";
    else
        cout<<c<<" is the largest";
    return 0;

}
