#include<iostream>
using namespace std;
int main()
{
    int a,b=0;
    cin>>a;
    if (a<0)
        a=-a;
    do
    {
        a/=10;
        b++;
    }
    while(a!=0);
    cout<<b<<endl;
}
