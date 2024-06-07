#include<iostream>
using namespace std;
int main()
{
    float s=0,b, a[10];
    for(int i=0; i<10;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    b=s/2;
    cout<<b<<endl;
    return 0;
}
