#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int s=0,n;
    cin>>n;
    for (int i=0;i<=n;i++)
    {
        s+=pow(2,i);
    }
    cout<<s;
    return 0;
}
