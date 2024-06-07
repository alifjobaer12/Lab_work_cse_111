#include<iostream>
using namespace std;

int factorial(int a)
{
    int b=0;
    if (a>1)
    {
        b=a* factorial(a-1);
        return b;
    }
    else if (a<1)
        return 1;
}
int main()
{
    int x;
    cin>>x;
    cout<<factorial(x)<<endl;
    return 0;
}
