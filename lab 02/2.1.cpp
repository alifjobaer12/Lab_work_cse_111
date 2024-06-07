#include<iostream>
using namespace std;
int main()
{
    int s=0, a;
    for (int i=0; i<5; i++)
    {
        cin>>a;
        s=a+s;
    }
    cout<<s;
    return 0;
}
