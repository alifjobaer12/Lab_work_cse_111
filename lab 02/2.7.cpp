#include<iostream>
using namespace std;
int main()
{
    int a,r=0;
    cin>>a;
    while(a!=0)
    {
        r=r*10+a%10;
        a/=10;
    }
    cout<<r<<endl;
    return 0;
}
