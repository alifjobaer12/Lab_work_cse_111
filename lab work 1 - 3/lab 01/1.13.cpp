#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,s;
    cin>>a;
    if (a%2==0)
    {
        s=a*a;
    }
    else
    {
        s=a*a*a;
    }
    cout<<s;
    return 0;
}


