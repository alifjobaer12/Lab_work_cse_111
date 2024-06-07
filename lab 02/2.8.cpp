#include<iostream>
using namespace std;
int main()
{
    int a,s=0;
    cin>>a;
    while(a>0)
    {
        s=s+(a%10);
        a=a/10;
    }
    cout<<s<<endl;
    return 0;
}
