#include<iostream>
using namespace std;

int sum(int x)
{
    int f=0,v=0;
while(x%10>0)
    {
        f=f*10+x%10;
        x=x/10;
    }
    return f;
}
int main()
{
    int a;
    cin>>a;
    cout<<sum(a);
    return 0;
}
