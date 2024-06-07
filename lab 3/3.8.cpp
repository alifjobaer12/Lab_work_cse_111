#include<iostream>
#include<cmath>
using namespace std;

int sum(int x)
{
    int f=0,v=0;
   while(x%10>0)
    {
        f+=x%10;
        x=x/10;
    }
    v=pow(f,0.5);
    return v;

}
int main()
{
    int a;
    cin>>a;
    cout<<sum(a);
    return 0;
}
