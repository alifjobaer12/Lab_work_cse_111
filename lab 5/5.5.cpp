#include<iostream>
using namespace std;
class prime
{
    int p;
    int x=0;
public:
    int input()
    {
        cin>>p;
        return 0;
    }
    int calculate()
    {

        for (int i=2; i<=p/2; i++)
        {
            if(p%i==0)
            {
                x=1;


            }

        }
        if(x==0)
            cout<<"Prime"<<endl;
        else if (x==1)
            cout<<"Not Prime"<<endl;
        else
            cout<<"Prime"<<endl;
    }

};
int main()
{
    prime a;
    a.input();
    a.calculate();
    return 0;
}
