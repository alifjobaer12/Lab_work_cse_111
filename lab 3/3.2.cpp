#include<iostream>
using namespace std;
int max(int a,int b, int c)
{

    if (a>b&&a>c)
        cout<<a<<" is maximum"<<endl;
    else if (b>a&&b>c)
        cout<<b<<" is maximum"<<endl;
    else
        cout<<c<<" is maximum"<<endl;
     return 0;
}
int min(int a,int b, int c)
{
     if (a<b&&a<c)
        cout<<a<<" is minimum"<<endl;
    else if (b<a&&b<c)
        cout<<b<<" is minimum"<<endl;
    else
        cout<<c<<" is minimum"<<endl;
     return 0;
}



int main()
{
    int x,y,z;
    cout<<"enter the 3 number"<<endl;
    cin>>x>>y>>z;
    max(x,y,z);
    min(x,y,z);
    return 0;

}
