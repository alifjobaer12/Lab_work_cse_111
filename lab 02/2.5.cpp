#include<iostream>
using namespace std;
int alif(int x)
{
    if (x==0)
        return 1;
    return x*alif(x-1);
}
int main ()
{
    int a;
    cin>>a;
    int b=alif(a);
    cout<<b;
    return 0;
}
