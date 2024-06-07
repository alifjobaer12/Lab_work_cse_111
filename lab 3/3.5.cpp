#include<iostream>
using namespace std;

float medium(int x,int y,int z)
{
    float ad;
    ad=(x+y+z)/3;
    return ad;
}
int main()
{
    int a,b,c;
    cout<<"enter the 3 no: "<<endl;
    cin>>a>>b>>c;
    cout<<"medium number is "<<medium(a,b,c)<<endl;
    return 0;
}
