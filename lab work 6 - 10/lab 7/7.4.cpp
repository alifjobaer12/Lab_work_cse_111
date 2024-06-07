#include<iostream>
using namespace std;

class bill
{
    int u;
public:
    void get()
    {
        cin>>u;

    }
    int calc_bill()
    {
        int b=0;
        if (u<101 && u>0)
        {
            b=u*5;
        }
        else if (u>100 && u<201)
        {
            b=(100*5)+(u-100)*7;
        }
        else if (u>200)
        {
            b=(100*5)+(100)*7+(u-200)*9;
        }
        return b;
    }
    void put()
    {
        cout<<calc_bill()<<endl;
    }
};
int main()
{
    bill a;
    a.get();
    a.calc_bill();
    a.put();
    return 0;
}
